//Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include <stdio.h>

int main() {
    int num, originalNum, lastDigit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while (num > 0) {
        lastDigit = num % 10;

        // Calculate factorial of lastDigit
        int fact = 1;
        for (int i = 1; i <= lastDigit; i++) {
            fact *= i;
        }

        sum += fact;
        num /= 10;
    }

    if (sum == originalNum && originalNum > 0) {
        printf("%d is a Strong Number.\n", originalNum);
    } else {
        printf("%d is NOT a Strong Number.\n", originalNum);
    }

    return 0;
}
