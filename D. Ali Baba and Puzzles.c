#include <stdio.h>
int main()
{
    long long a, b, c, d;
    int found = 0;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    if (a + b - c == d) {
        found = 1;
    }

    if (a + (b * c) == d) {
        found = 1;
    }

    if (a - b + c == d) {
        found = 1;
    }

    if (a - (b * c) == d) {
        found = 1;
    }

    if ((a * b) + c == d) {
        found = 1;
    }

    if ((a * b) - c == d) {
        found = 1;
    }

    if ((a + b) * c == d) {
        found = 1;
    }

    if ((a - b) * c == d) {
        found = 1;
    }

     if(found) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }

    return 0;
}
