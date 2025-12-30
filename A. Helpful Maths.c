#include<stdio.h>
int main()
{
    char a[101];
    int c[4]= {0};
    scanf("%s",a);
    for(int i=0 ; a[i] != '\0' ; i=i+2)
    {
        if(a[i]=='1')
            c[1]++;
        if(a[i]=='2')
            c[2]++;
        if(a[i]=='3')
            c[3]++;
    }
    int first = 1;
    for (int i = 1; i <= 3; i++)
    {
        while (c[i] > 0)
        {
            if (!first)
                printf("+");
            printf("%d", i);
            first = 0;
            c[i]--;
        }
    }
    return 0;
}
