#include <stdio.h>

enum Codes { 
    OK = 200, 
    CREATED = 201, 
    BAD_REQUEST = 400, 
    NOT_FOUND = 404 
};

int main() {
    printf("OK integer value: %d\n", OK);
    printf("CREATED integer value: %d\n", CREATED);
    printf("BAD_REQUEST integer value: %d\n", BAD_REQUEST);
    printf("NOT_FOUND integer value: %d\n", NOT_FOUND);
    return 0;
}