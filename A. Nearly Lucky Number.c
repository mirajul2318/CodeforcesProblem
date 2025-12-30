#include <stdio.h>
int main()
{
    long long int n;
    int c=0,f=0,a=0;
    scanf("%lld", &n);
    while(n!=0)
    {
        a=0;
        a=n%10;
        if(a==4||a==7)
            c++;
        else
         f++;
        n=n/10;
    }
    if(f!=0)
        printf("NO\n");
    else if(c==1)
         printf("NO\n");
     else
        printf("YES\n");
    return 0;
}
