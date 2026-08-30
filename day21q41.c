//41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/

#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, digits = 0, temp, swappedNum;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Single digit or negative handling boundary
    if (num < 10 && num > -10) {
        printf("Swapped number: %d\n", num);
        return 0;
    }

    temp = num;
    lastDigit = temp % 10;

    // Count total digits and find the first digit
    while (temp >= 10) {
        temp /= 10;
        digits++;
    }
    firstDigit = temp;

    // Calculate place value divisor (e.g., 10^digits)
    int pow10 = (int)pow(10, digits);

    // Extract middle portion of the number
    int middle = (num % pow10) / 10;

    // Construct the swapped number
    swappedNum = lastDigit * pow10 + middle * 10 + firstDigit;

    printf("Swapped number: %d\n", swappedNum);

    return 0;
}