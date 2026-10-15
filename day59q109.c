#include <stdio.h>

int main()
{
    int n, k, i, j;

    scanf("%d", &n);
    int arr[n];

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &k);

    int maxSum = 0;

    for(i = 0; i < k; i++)
        maxSum += arr[i];

    for(i = 1; i <= n - k; i++)
    {
        int sum = 0;

        for(j = i; j < i + k; j++)
            sum += arr[j];

        if(sum > maxSum)
            maxSum = sum;
    }

    printf("%d", maxSum);

    return 0;
}