#include <stdio.h>
int main()
{
    char c, next_c;
    scanf("%c", &c);
    if (c == 'z')
    {
        next_c = 'a';
    }
    else
    {
        next_c = c + 1;
    }
    printf("%c\n", next_c);
    return 0;
}
