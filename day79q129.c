#include <stdio.h>

int main() {
    FILE *file = fopen("numbers.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    int num, sum = 0, count = 0;
    while (fscanf(file, "%d", &num) == 1) {
        sum += num;
        count++;
    }
    
    fclose(file);
    
    if (count == 0) {
        printf("No numbers found in the file.\n");
    } else {
        double average = (double)sum / count;
        printf("Sum: %d\n", sum);
        printf("Average: %.2f\n", average);
    }
    return 0;
}