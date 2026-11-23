#include <stdio.h>

enum Color { RED, GREEN, BLUE, YELLOW };

int main() {
    char *colorNames[] = {"RED", "GREEN", "BLUE", "YELLOW"};
    int totalColors = 4;
    
    for (int i = 0; i < totalColors; i++) {
        printf("%s = %d\n", colorNames[i], i);
    }
    return 0;
}