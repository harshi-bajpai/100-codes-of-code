//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/

#include <stdio.h>

int main() {
    long long binary;
    if (scanf("%lld", &binary) != 1) return 0;

    long long result = 0;
    long long place = 1;

    if (binary == 0) {
        printf("1\n");
        return 0;
    }

    while (binary > 0) {
        int digit = binary % 10;
        int flipped_digit = (digit == 0) ? 1 : 0;
        
        result += flipped_digit * place;
        place *= 10;
        binary /= 10;
    }

    printf("%lld\n", result);
    return 0;
}