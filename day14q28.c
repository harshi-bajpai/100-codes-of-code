//Q28: Write a program to print the product of even numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)

*/

#include <stdio.h>

int main() {
    int n, i;
    long long product = 1;
    int hasEven = 0;

    printf("Enter a value for n: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i += 2) {
        product *= i;
        hasEven = 1;
    }

    if (hasEven) {
        printf("Product of even numbers from 1 to %d: %lld\n", n, product);
    } else {
        printf("No even numbers found in range 1 to %d.\n", n);
    }

    return 0;
} 