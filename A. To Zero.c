#include <stdio.h>
long long ans(long long n, long long k)
{
    if (n == 0) return 0;
    if (n <= k)
    {
        return 1;
    }
    long long c = 0;
    if (n % 2 == 1)
    {
         c= 1 +ans(n - k, k);
    }
    else
    {
        c = n / (k - 1);
        if (n % (k - 1) != 0)
        {
            c++;
        }
    }
    return c;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long n, k;
        scanf("%lld %lld", &n, &k);
        printf("%lld\n", ans(n, k));
    }
    return 0;
}
