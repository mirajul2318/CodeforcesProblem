#include <stdio.h>

int main() {
    unsigned long long id;
    scanf("%llu", &id);

    unsigned long long row = id / 4;
    unsigned long long col;

    if (row % 2 == 0) {
        col = id % 4;
    } else {
        col = 3 - (id % 4);
    }

    printf("%llu %llu\n", row, col);
    return 0;
}
