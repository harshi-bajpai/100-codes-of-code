#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    // Writing records
    FILE *file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }
    
    struct Student s[2] = {{"Alice", 101, 85.5}, {"Bob", 102, 90.0}};
    for (int i = 0; i < 2; i++) {
        fprintf(file, "%s %d %.2f\n", s[i].name, s[i].roll, s[i].marks);
    }
    fclose(file);
    
    // Reading records
    file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }
    
    char name[50];
    int roll;
    float marks;
    
    printf("Student Records:\n");
    while (fscanf(file, "%s %d %f", name, &roll, &marks) == 3) {
        printf("Name: %s, Roll Number: %d, Marks: %.2f\n", name, roll, marks);
    }
    fclose(file);
    
    return 0;
}