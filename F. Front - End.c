#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int start = 0, end = n - 1;
    while (start <= end)
    {
        if (start == end)
        {
            printf("%d", a[start]);
        }
        else
        {
            printf("%d %d ", a[start], a[end]);
        }
        start++;
        end--;
    }

    return 0;
}

