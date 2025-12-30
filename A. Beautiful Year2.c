#include <stdio.h>
int hasDistinctDigits(int y)
{
    int digits[10] = {0};

    while (y > 0)
    {
        int digit = y % 10;
        if (digits[digit]) return 0;
        digits[digit] = 1;
        y /= 10;
    }
    return 1;
}

int mai2n()
{
    int a;
    scanf("%d", &a);

    while (1)
    {
        a++;
        if (hasDistinctDigits(a))
        {
            printf("%d\n", a);
            break;
        }
    }
    return 0;
}

