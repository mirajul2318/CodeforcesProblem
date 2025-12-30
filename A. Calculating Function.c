#include<stdio.h>
#include<math.h>
int main()
{
     long long n,sum;
    scanf("%lld",&n);
   sum=(n%2==0)? n/2 :-(n+1)/2 ;
    printf("%lld\n",sum);
    return 0;
}
