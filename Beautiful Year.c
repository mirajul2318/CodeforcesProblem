#include<stdio.h>
int main()
{
    int y;
    scanf("%d",&y);
    if(y<1987)
        printf("%d\n",y+1);
    else if(y>=2013)
    printf("%d\n",y+1);
    else if(1987<=y<2013)
        printf("2013\n");
    return 0;
}
