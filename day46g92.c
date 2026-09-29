#include <stdio.h>

int main() {
    char str[100];
    int count[26] = {0};
    int i;

    printf("Enter string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++) {

        int index = str[i] - 'a';

        if(count[index] == 1) {
            printf("First repeating alphabet: %c", str[i]);
            return 0;
        }

        count[index]++;
    }

    printf("No repeating alphabet");

    return 0;
}