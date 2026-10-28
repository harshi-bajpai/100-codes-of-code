#include <stdio.h>
#include <ctype.h>

int main()
{
    char s[200];
    int i;

    fgets(s, sizeof(s), stdin);

    s[0] = toupper(s[0]);

    for(i = 1; s[i] != '\0'; i++)
        s[i] = tolower(s[i]);

    printf("%s", s);

    return 0;
}