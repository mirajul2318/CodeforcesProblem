#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        char w[101];
        scanf("%s", w);
        int l= strlen(w);
        if (l > 10)
        {
            printf("%c%d%c\n", w[0], l - 2, w[l - 1]);
        }
        else
        {
            printf("%s\n", w);
        }
    }
    return 0;
}

