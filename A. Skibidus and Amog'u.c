#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    for(int i=1;i<=t;i++)
    {
        char a[11];
        scanf("%s",&a);
        int l=strlen(a);
        a[l-2]='i';
        a[l-1]='\0';
        printf("%s\n",a);
    }
    return 0;
}
