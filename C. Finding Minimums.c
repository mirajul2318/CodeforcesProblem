#include <stdio.h>
int main()
 {
    int N, K;
    scanf("%d %d", &N, &K);
    int a[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < N; i += K) {
        int min = a[i];

        for (int j = 1; j < K && (i + j) < N; j++) {
            if (a[i + j] < min) {
                min = a[i + j];
            }
        }
        printf("%d ", min);
    }
    return 0;
}

