#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int r = a - b;
    if (r >= 0) {
        printf("%d\n", r);
    } else {
        printf("0\n");
    }
    return 0;
}

