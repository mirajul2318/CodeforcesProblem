#include <stdio.h>
#include <string.h>

void solveTestCase(int n, int digits[]) {

    char target[] = "01032025";
    int target_count[10] = {0};
    int current_count[10] = {0};


    for (int i = 0; target[i] != '\0'; i++) {
        target_count[target[i] - '0']++;
    }


    for (int i = 0; i < n; i++) {
        current_count[digits[i]]++;


        int can_form = 1;
        for (int j = 0; j < 10; j++) {
            if (current_count[j] < target_count[j]) {
                can_form = 0;
                break;
            }
        }

        if (can_form) {
            printf("%d\n", i + 1);
            return;
        }
    }


    printf("0\n");
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        int digits[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &digits[i]);
        }
        solveTestCase(n, digits);
    }

    return 0;
}
