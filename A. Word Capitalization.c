#include<stdio.h>
int main()
{
    char a[1000];
    scanf("%s",&a);
    int l=strlen(a);
    for(int i=0; i<l; i++)
    {
        if(a[0]>='a'&& a[0]<='z')
        {
            a[0]=toupper(a[0]);
        }
        printf("%c",a[i]);
    }
    return 0;
}
