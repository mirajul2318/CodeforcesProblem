#include<stdio.h>
int main()
{
    int t,n,c=0;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%d",&n);
        if(n%2 ==0)
        {
            c=(n/2)-1;
        }
        else
        {
            c=(n-1)/2;
        }
         printf("%d\n",c);
    }
    return 0;
}

