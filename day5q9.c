//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/
#include <stdio.h>

int main() {
    int total_seconds, hours, minutes, seconds, remaining_seconds;

    // Input time in total seconds
    printf("Enter time in seconds: ");
    scanf("%d", &total_seconds);

    // Calculation
    hours = total_seconds / 3600;
    remaining_seconds = total_seconds % 3600;
    minutes = remaining_seconds / 60;
    seconds = remaining_seconds % 60;

    // Output result in HH:MM:SS format (padded with leading zeros)
    printf("Formatted Time: %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}