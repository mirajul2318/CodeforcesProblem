#include<stdio.h>
int main()
{
    int a[5],i=1,max,n,count;
    scanf("%d",&n);
    scanf("%d %d %d %d",&a[0],&a[1],&a[3],&a[4]);
    while(i<=n)
    {
       a[2]=a[0]+a[1];
       max=a[2];
       count=1;
       a[2]=a[3]-a[1];
       if(max>a[2]){
         max=max;
         count=1;
       }
       else{
         max=a[2];
         count=2;
       }
       a[2]=a[4]+a[3];
       if(max>a[2]){
         max=max;
         count=1;
       }
       else{
         max=a[2];
         count=3;
       }


     i++;
    }
    printf("%d\n",count);
}
