#include <stdio.h>
int main()
 {
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long a, b;
        scanf("%lld %lld", &a, &b);
        long long rem = a % b;
        long long m = (rem == 0) ? 0 : (b - rem);
        printf("%lld\n", m);
    }
    return 0;
}


