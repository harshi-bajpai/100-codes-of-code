//Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/
#include <stdio.h>

int main() {
    int num, i;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Binary representation: 0\n");
        return 0;
    }

    printf("Binary representation: ");
    
    // Print bits starting from the highest non-zero bit
    int started = 0;
    for (i = 31; i >= 0; i--) {
        int k = num >> i;
        if (k & 1) {
            printf("1");
            started = 1;
        } else if (started) {
            printf("0");
        }
    }
    printf("\n");

    return 0;
}
