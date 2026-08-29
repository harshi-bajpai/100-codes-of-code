//Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/

#include <stdio.h>

int main() {
    long long num;
    if (scanf("%lld", &num) != 1) return 0;

    if (num < 0) num = -num;

    long long product = 1;
    int has_odd = 0;

    if (num == 0) {
        // 0 is even, so product of odd digits is 0
        printf("0\n");
        return 0;
    }

    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 != 0) {
            product *= digit;
            has_odd = 1;
        }
        num /= 10;
    }

    if (has_odd) {
        printf("%lld\n", product);
    } else {
        printf("0\n"); // Prints 0 if no odd digits are found
    }

    return 0;
}