#include<stdio.h>
int main()
{
    int n,k,count=0;
    scanf("%d %d",&n,&k);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int f=a[k-1];
    for(int i=0;i<n;i++)
    {
        if(a[i]>=f && a[i]>0){
           count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
