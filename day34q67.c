//Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
#include <stdio.h>

int main() {
    int n, pos, val;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n + 1];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter 0-based index position to insert at: ");
    scanf("%d", &pos);
    
    if (pos < 0 || pos > n) {
        printf("Invalid position!\n");
        return 1;
    }
    
    printf("Enter element to insert: ");
    scanf("%d", &val);
    
    // Shift elements to the right
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    
    arr[pos] = val;
    
    printf("Array after insertion: ");
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}