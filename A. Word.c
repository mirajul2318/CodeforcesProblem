#include <stdio.h>
#include <ctype.h>
int main()
{
    int i = 0, a = 0, b = 0;
    char s[101];
    scanf("%s", s);
    while (s[i] != '\0')
    {
        if ('a' <= s[i] && s[i] <= 'z')
            a++;
        else if ('A' <= s[i] && s[i] <= 'Z')
            b++;
        i++;
    }
    if (a >= b)
    {
        i = 0;
        while (s[i] != '\0')
        {
            s[i] = tolower(s[i]);
            i++;
        }
    }
    else
    {
        i = 0;
        while (s[i] != '\0')
        {
            s[i] = toupper(s[i]);
            i++;
        }
    }
    printf("%s\n", s);
    return 0;
}
