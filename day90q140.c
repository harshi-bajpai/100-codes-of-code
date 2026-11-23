#include <stdio.h>

enum Gender { MALE, FEMALE, OTHER };

struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    struct Person p1 = {"Alice", FEMALE};
    char *genderStr[] = {"Male", "Female", "Other"};
    
    printf("Name: %s\n", p1.name);
    printf("Gender: %s\n", genderStr[p1.gender]);
    return 0;
}