#include <stdio.h>
#include <ctype.h>

int main() {
    int n;
    char s[101];
    int alphabet[26] = {0};


    scanf("%d", &n);
    scanf("%s", s);


    for (int i = 0; i < n; i++) {
        char c = tolower(s[i]);
        int index = c - 'a';
        alphabet[index] = 1;
    }


    for (int i = 0; i < 26; i++) {
        if (alphabet[i] == 0) {
            printf("NO\n");
            return 0;
        }
    }

    printf("YES\n");
    return 0;
}

