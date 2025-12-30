#include<stdio.h>
int main()
{
     int t;
    char b,a[]="codeforces";
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf(" %c",&b);
         int j=0,c=0;
         while(a[j]!='\0')
         {
             if(a[j]==b){
                c++;
                break;
             }
              j++;
         }
         if(c !=0)
           printf("YES\n");
         else
            printf("NO\n");
    }
    return 0;
}
