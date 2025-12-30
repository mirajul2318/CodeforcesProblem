#include<stdio.h>
int main()
{
    int t;
    char a[20];
    scanf("%d",&t);
    for(int k=1;k<=t;k++)
    {
        scanf("%s",&a);
        int s=0,b=0;
        for(int i=0;i<=2;i++)
        {
          s=s+a[i];
        }
         for(int j=3;j<=5;j++)
        {
          b=b+a[j];
        }
        if(s==b)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
