#include <stdio.h>
#include <limits.h>

int calculate_fibonacciness(int a1, int a2, int a4, int a5) {
    int max_fibonacciness = 0;
    for (int a3 = -200; a3 <= 200; ++a3) {
        int fib_count = 0;
        if (a4 == a2 + a3) {
            fib_count++;
        }
        if (a3 == a1 + a2) {
            fib_count++;
        }
        if (a5 == a3 + a4) {
            fib_count++;
        }
        if (fib_count > max_fibonacciness) {
            max_fibonacciness = fib_count;
        }
    }

    return max_fibonacciness;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int a1, a2, a4, a5;
        scanf("%d %d %d %d", &a1, &a2, &a4, &a5);

        int result = calculate_fibonacciness(a1, a2, a4, a5);
        printf("%d\n", result);
    }

    return 0;
}

