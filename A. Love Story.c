#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);

    char reference[] = "codeforces";
    char s[11];

    while (t--)
    {
        scanf("%s", s);

        int differences = 0;
        for (int i = 0; i < 10; i++)
        {
            if (s[i] != reference[i])
            {
                differences++;
            }
        }

        printf("%d\n", differences);
    }

    return 0;
}
