//Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int temp_a = a, temp_b = b;
    while (temp_b != 0) {
        int remainder = temp_a % temp_b;
        temp_a = temp_b;
        temp_b = remainder;
    }

    int hcf = temp_a;
    int lcm = (a * b) / hcf;

    printf("%d\n", lcm);
    return 0;
}