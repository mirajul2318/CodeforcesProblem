#include<stdio.h>
int main()
{
    int y,w,a=0,b=0;
    scanf("%d%d",&y,&w);
        if(y>w)
        {
            a=7-y;
        }
        else if(y<w)
        {
            a=7-w;
        }
        else if(y==w)
        {
            a=7-w;
        }
      if(a==1)
     printf("1/6\n");
     else if(a==2)
     printf("1/3\n");
    else if(a==3)
     printf("1/2\n");
     else if(a==4)
     printf("2/3\n");
     else if(a==5)
     printf("5/6\n");
     else if(a==6)
     printf("1/1\n");
     else
     printf("0/1\n");
    return 0;
}
