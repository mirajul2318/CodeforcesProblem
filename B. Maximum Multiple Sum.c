#include<stdio.h>
int main()
{
    int t,a,b;
    char c;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
       scanf("%d%c%d",&a,&c,&b);
       printf("%d\n",a+b);
    }
    return 0;
}


