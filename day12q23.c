//Q23: Write a program to calculate library fine based on late days as follows: 
//First 5 days late: ₹2/day 
//Next 5 days late: ₹4/day 
//Next 20 days days late: ₹6/day 
//More than 30 days: Membership Cancelled.

/*
Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹22

Input 3:
15
Output 3:
Fine ₹60

Input 4:
31
Output 4:
Membership Cancelled

*/

#include <stdio.h>

int main() {
    int days;
    float fine = 0.0;

    printf("Enter number of late days: ");
    scanf("%d", &days);

    if (days <= 0) {
        printf("No fine. Returned on time!\n");
    } else if (days <= 5) {
        fine = days * 0.50; // 50 paise/day for first 5 days
        printf("Fine Amount: $%.2f\n", fine);
    } else if (days <= 10) {
        fine = (5 * 0.50) + ((days - 5) * 1.00); // 1 rupee/day for days 6-10
        printf("Fine Amount: $%.2f\n", fine);
    } else if (days <= 30) {
        fine = (5 * 0.50) + (5 * 1.00) + ((days - 10) * 5.00); // 5 rupees/day above 10 days
        printf("Fine Amount: $%.2f\n", fine);
    } else {
        printf("Membership cancelled due to delay over 30 days!\n");
    }

    return 0;
}