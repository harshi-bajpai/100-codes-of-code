//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i, start = 0;

    printf("Enter sentence: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; ; i++) {

        if(str[i] == ' ' ||
           str[i] == '\n' ||
           str[i] == '\0') {

            int left = start;
            int right = i - 1;

            while(left < right) {
                char temp = str[left];
                str[left] = str[right];
                str[right] = temp;

                left++;
                right--;
            }

            start = i + 1;
        }

        if(str[i] == '\0')
            break;
    }

    printf("%s", str);

    return 0;
}