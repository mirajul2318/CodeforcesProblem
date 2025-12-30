#include <stdio.h>
int main()
 {
    float X, P;
    scanf("%f %f", &X, &P);
    float a = P / (1 -( X / 100));
    printf("%.2f\n",a);
    return 0;
}
