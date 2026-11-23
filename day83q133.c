#include <stdio.h>

enum Month { JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

int main() {
    int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char *monthNames[] = {"", "January", "February", "March", "April", "May", "June", 
                          "July", "August", "September", "October", "November", "December"};
    
    for (int i = JAN; i <= DEC; i++) {
        printf("%s has %d days.\n", monthNames[i], days[i]);
    }
    return 0;
}