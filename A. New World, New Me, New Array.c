#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
    int n,k,p,count=0,sum=0;
    scanf("%d%d%d",&n,&k,&p);
    if((n*p)<k  ||  (n*(-p))>k )
        printf("-1\n");
    else if(k==0)
        printf("0\n");
    else
    {
        for(int i=1;i<=n;i++)
        {
            k=abs(k);
            sum=sum+p;
            count++;
            if(sum>=k)
                break;
        }
        printf("%d\n",count);
    }
    }
  return 0;
}
