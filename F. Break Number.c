#include <stdio.h>
int main()
 {
    int N;
    scanf("%d", &N);

    long long arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%lld", &arr[i]);
    }
    int max_f = 0;
    for (int i = 0; i < N; i++)
    {
        long long x = arr[i];
        int count = 0;
        while (x % 2 == 0) {
            x /= 2;
            count++;
        }
        if (count > max_f) {
            max_f = count;
        }
    }

    printf("%d\n", max_f);
    return 0;
}
