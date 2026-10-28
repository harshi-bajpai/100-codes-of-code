#include <stdio.h>

int main()
{
    FILE *fp;
    char filename[100];
    char text[200];

    scanf("%s", filename);

    fp = fopen(filename, "a");

    if(fp == NULL)
    {
        printf("Error opening file");
        return 1;
    }

    getchar();

    fgets(text, sizeof(text), stdin);

    fprintf(fp, "%s", text);

    fclose(fp);

    printf("Text appended successfully.");

    return 0;
}