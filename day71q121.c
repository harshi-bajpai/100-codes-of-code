#include <stdio.h>

int main()
{
    FILE *fp;
    char name[50];
    int age;

    scanf("%s", name);
    scanf("%d", &age);

    fp = fopen("info.txt", "w");

    if(fp == NULL)
    {
        printf("Error opening file");
        return 1;
    }

    fprintf(fp, "Name: %s\nAge: %d", name, age);

    fclose(fp);

    printf("Data successfully saved.");

    return 0;
}