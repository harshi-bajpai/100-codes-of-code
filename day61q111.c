#include <stdio.h>

int main()
{
    int n, k, i, j;

    scanf("%d", &n);
    int arr[n];

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &k);

    for(i = 0; i <= n - k; i++)
    {
        int negative = 0;

        for(j = i; j < i + k; j++)
        {
            if(arr[j] < 0)
            {
                negative = arr[j];
                break;
            }
        }

        printf("%d ", negative);
    }

    return 0;
}