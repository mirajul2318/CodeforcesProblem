#include<stdio.h>
int main()
{
    int t,h,m,a=0,b=0;
    scanf("%d",&t);
     for(int i=1;i<=t;i++)
    {
       scanf("%d%d",&h,&m);
       a=(h*60)+m;
       b=1440-a;
       printf("%d\n",b);
       a=0;
       b=0;
    }
    return 0;
}


