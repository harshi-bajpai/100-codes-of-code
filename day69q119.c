#include <stdio.h>

int main()
{
    int a[100], n;
    int freq[1000] = {0};
    int i;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);

        if(freq[a[i]] == 1)
        {
            printf("%d", a[i]);
            return 0;
        }

        freq[a[i]]++;
    }

    return 0;
}