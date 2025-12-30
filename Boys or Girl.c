#include <stdio.h>
#include <string.h>

int main()
{
    char a[101];
    char b[26];
    int c = 0;

    scanf("%s", a);

    for (int i = 0; i < strlen(a); i++)
    {
        int n = 1;
        for (int j = 0; j < c; j++)
        {
            if (a[i] == b[j])
            {
                n = 0;
                break;
            }
        }
        if (n)
        {
            b[c++] = a[i];
        }
    }

    if (c % 2 == 0)
    {
        printf("CHAT WITH HER!\n");
    }
    else
    {
        printf("IGNORE HIM!\n");
    }

    return 0;
}
