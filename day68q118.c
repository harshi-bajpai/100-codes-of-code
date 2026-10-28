#include <stdio.h>

int main()
{
    int a[100], n, i;
    int sum = 0, expected;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    expected = n * (n + 1) / 2;

    printf("%d", expected - sum);

    return 0;
}