//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/

#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            sum += 1.0;
        } else {
            double numerator = 2 * i - 1;
            double denominator = 2 * i;
            sum += numerator / denominator;
        }
    }

    printf("Sum of the series up to %d terms = %.4f\n", n, sum);

    return 0;
}