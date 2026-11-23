#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *infile = fopen("input.txt", "r");
    FILE *outfile = fopen("output.txt", "w");
    
    if (infile == NULL || outfile == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    char ch;
    while ((ch = fgetc(infile)) != EOF) {
        fputc(toupper(ch), outfile);
    }
    
    fclose(infile);
    fclose(outfile);
    printf("Successfully converted lowercase to uppercase.\n");
    return 0;
}