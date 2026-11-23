#include <stdio.h>

enum Status { SUCCESS, FAILURE, TIMEOUT };

int main() {
    enum Status status = TIMEOUT;
    
    switch (status) {
        case SUCCESS:
            printf("Operation completed successfully.\n");
            break;
        case FAILURE:
            printf("Operation failed.\n");
            break;
        case TIMEOUT:
            printf("Operation timed out. Please try again.\n");
            break;
    }
    return 0;
}