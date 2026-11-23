#include <stdio.h>

enum Menu { ADD = 1, SUBTRACT, MULTIPLY };

int main() {
    int choice = ADD;
    double a = 10.0, b = 5.0;
    
    switch (choice) {
        case ADD:
            printf("Result: %.2f\n", a + b);
            break;
        case SUBTRACT:
            printf("Result: %.2f\n", a - b);
            break;
        case MULTIPLY:
            printf("Result: %.2f\n", a * b);
            break;
        default:
            printf("Invalid choice\n");
    }
    return 0;
}