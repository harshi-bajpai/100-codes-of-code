#include <stdio.h>

enum Role { ADMIN, USER, GUEST };

int main() {
    enum Role currentRole = ADMIN;
    
    switch (currentRole) {
        case ADMIN:
            printf("Welcome Admin! You have full access.\n");
            break;
        case USER:
            printf("Welcome User! You have standard access.\n");
            break;
        case GUEST:
            printf("Welcome Guest! Please sign up for full access.\n");
            break;
    }
    return 0;
}