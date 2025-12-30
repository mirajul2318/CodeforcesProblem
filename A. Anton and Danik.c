#include<stdio.h>
int main()
{
    int n;
    char a[100000];
    scanf("%d",&n);
    scanf("%s",&a);
    int s=0,b=0;
     for(int i=0;i<=(n-1);i++)
    {
         if(a[i]=='A')
            s++;
        else if(a[i]=='D')
            b++;
    }
    if(s>b)
        printf("Anton\n");
    else if(s<b)
        printf("Danik\n");
     else if(s==b)
        printf("Friendship\n");
    return 0;
}

