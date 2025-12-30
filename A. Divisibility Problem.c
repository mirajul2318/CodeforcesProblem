#include<stdio.h>
int main()
{
    int t,a,b,count;
    scanf("%d",&t);
    for(int j=1;j<=t;j++)
    {
        scanf("%d%d",&a,&b);
        for(int i=0; i<=b; i++)
        {
            if(a%b==0)
            {
                count=i;
                break;
            }
            else
            {
                a++;
            }
        }
         printf("%d\n",count);
    }
    return 0;
}
