#include<stdio.h>
int main()
{
    int x1,x2,x3,x4,a=0,b=0,c=0;
    scanf("%d%d%d%d",&x1,&x2,&x3,&x4);
     if(x1>x2 && x1>x3 && x1>x4)
     {
         a=x1-x4;
         b=x1-x3;
         c=x1-x2;
     }
      else if(x2>x1 && x2>x3 && x2>x4)
     {
         a=x2-x4;
         b=x2-x3;
         c=x2-x1;
     }
      else if(x3>x1 && x3>x2 && x3>x4)
     {
         a=x3-x4;
         b=x3-x2;
         c=x3-x1;
     }
     else if(x4>x1 && x4>x2 && x4>x3)
     {
         a=x4-x3;
         b=x4-x2;
         c=x4-x1;
     }
     printf("%d %d %d\n",a,b,c);
     return 0;
}
