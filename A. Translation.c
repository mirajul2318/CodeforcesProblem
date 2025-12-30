#include <stdio.h>
#include <string.h>

int main() {
    char s[101], t[101];
    scanf("%s", s);
    scanf("%s", t);

    int s_len = strlen(s);
    int t_len = strlen(t);
    if (s_len != t_len) {
        printf("NO\n");
        return 0;
    }
    int is_reverse = 1;
    for (int i = 0; i < s_len; i++) {
        if (s[i] != t[s_len - 1 - i]) {
            is_reverse = 0;
            break;
        }
    }
    if (is_reverse) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}
