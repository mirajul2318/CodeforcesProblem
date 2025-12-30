#include<stdio.h>
int main()
{
    int k,n,w,i,sum=0,f;
    scanf("%d %d %d",&k,&n,&w);
    for(i=1;i<=w;i++)
    {
        sum=sum+i*k;
    }
    f=sum-n;
    if(f<=0)
        printf("0\n");
    else
        printf("%d\n",f);
    return 0;
}
