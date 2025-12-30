#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_vowel(char c) {

    c = tolower(c);
    return (c == 'a' || c == 'o' || c == 'y' || c == 'e' || c == 'u' || c == 'i');
}

int main() {
    char a[101];
    char b[202];
    int j = 0;

    scanf("%s", a);
    int len = strlen(a);

    for (int i = 0; i < len; i++) {
        char c = tolower(a[i]);
        if (!is_vowel(c)) {
            b[j++] = '.';
            b[j++] = c;
        }
    }

    b[j] = '\0';

    printf("%s\n",b);
    return 0;
}

