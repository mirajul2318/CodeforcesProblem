#include<stdio.h>
int main(){
int n,k,a;
scanf("%d %d",&n,&k);
for(int i=1;i<=k;i++){
        a=0;
 a=n%10;
 if(a==0)
    n=n/10;
 else
    n=n-1;
}
printf("%d\n",n);
return 0;
}
