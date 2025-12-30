#include<stdio.h>
int main()
{
    int n, p, q, level, i;
    scanf("%d", &n);
    int levels[n + 1];
    for (i = 1; i <= n; i++)
    {
        levels[i] = 0;
    }
    scanf("%d", &p);
    for (i = 0; i < p; i++)
    {
        scanf("%d", &level);
        levels[level] = 1;
    }
    scanf("%d", &q);
    for (i = 0; i < q; i++)
    {
        scanf("%d", &level);
        levels[level] = 1;
    }
    for (i = 1; i <= n; i++)
    {
        if (levels[i] == 0)
        {
            printf("Oh, my keyboard!\n");
            return 0;
        }
    }
    printf("I become the guy.\n");
    return 0;
}
