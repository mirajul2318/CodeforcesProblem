#include<stdio.h>
int main()
{
    int n,x=0,i;
    char a[4];
    scanf("%d",&n);
    gets(a);
    while(n--)
    {
        gets(a);
        for(i=0;i<3;i++)
        {
            if(a[i]=='+'){
                x++;
                break;
            }
            else if(a[i]=='-'){
                x--;
                break;
            }
        }
    }
    printf("%d\n",x);
    return 0;
}
