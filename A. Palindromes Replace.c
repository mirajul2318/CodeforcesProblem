#include <stdio.h>
#include <string.h>

void solve()
{
    char s[101];
    scanf("%s", s);

    int n = strlen(s);
    int i, j;


    for (i = 0, j = n - 1; i <= j; i++, j--)
    {
        if (s[i] != '?' && s[j] != '?' && s[i] != s[j])
        {
            printf("-1\n");
            return;
        }
        if (s[i] == '?' && s[j] != '?')
        {
            s[i] = s[j];
        }
        else if (s[i] != '?' && s[j] == '?')
        {
            s[j] = s[i];
        }
        else if (s[i] == '?' && s[j] == '?')
        {
            s[i] = s[j] = 'a';
        }
    }

    printf("%s\n", s);
}

int main()
{
    solve();
    return 0;
}

