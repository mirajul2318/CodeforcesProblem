#include <stdio.h>

void solve()
{
    int n;
    scanf("%d", &n);

    int parts[5], count = 0;
    int place = 1;
    while (n > 0)
    {
        int digit = n % 10;
        if (digit != 0)
        {
            parts[count++] = digit * place;
        }
        n /= 10;
        place *= 10;
    }

    printf("%d\n", count);
    for (int i = 0; i < count; i++)
    {
        printf("%d ", parts[i]);
    }
    printf("\n");
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        solve();
    }

    return 0;
}
