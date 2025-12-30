#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int firstD = N / 10;
    int secondD = N % 10;
    if (secondD != 0 && firstD % secondD == 0) {
        printf("YES\n");
    } else if (firstD != 0 && secondD % firstD == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}
