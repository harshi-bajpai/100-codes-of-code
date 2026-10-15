#include <stdio.h>

int main()
{
    int n, total = 0, left = 0;

    scanf("%d", &n);
    int a[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        total += a[i];
    }

    for(int i = 0; i < n; i++)
    {
        int right = total - left - a[i];

        if(left == right)
        {
            printf("%d", i);
            return 0;
        }

        left += a[i];
    }

    printf("-1");

    return 0;
}