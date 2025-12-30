#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a==b && b!=c)
        printf("%d\n",c);
    else if(a==c && a!=b)
        printf("%d\n",b);
    else if(b==c && b!=a)
        printf("%d\n",a);
    return 0;
}
