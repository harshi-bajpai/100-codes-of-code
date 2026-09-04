/*Q50: Write a program to print the following pattern:
*****
 ****
  ***
   **
    *

/*
Sample Test Cases:
Input 1:

Output 1:
*****
 ****
  ***
   **
    *

Input 2:

Output 2:
Note: Spaces indicate indentation.

*/
#include <stdio.h>

int main() {
    int total_rows = 5;

    for (int i = total_rows; i >= 1; i--) {
        // Print leading spaces (0 for row 1, 1 for row 2, etc.)
        for (int space = 0; space < total_rows - i; space++) {
            printf(" ");
        }
        // Print asterisks decreasing from 5 down to 1
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}