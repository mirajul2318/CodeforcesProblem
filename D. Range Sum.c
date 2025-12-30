#include <stdio.h>
int main()
{
    int T;
    scanf("%d", &T);

    while (T--) {
        long long L, R;
        scanf("%lld %lld", &L, &R);

        long long sum_R = (R * 1LL * (R + 1)) / 2;
        long long sum_L_minus_1 = ((L - 1) * 1LL * L) / 2;
        long long r = sum_R - sum_L_minus_1;
        printf("%lld\n", r);
    }
    return 0;
}
