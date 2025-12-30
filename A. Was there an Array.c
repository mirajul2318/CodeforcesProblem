#include<stdio.h>
int main()
{
    int t,n,b[100],i;
    scanf("%d",&t);
    for(int j=1; j<=t; j++)
    {
        scanf("%d",&n);
        for(i=0; i<(n-2); i++)
        {
            scanf("%d",&b[i]);
        }
        int m=1;
        for (i=0; i<(n-4); i++)
        {
            if (b[i] == 1 && b[i + 1] == 0 && b[i + 2] == 1)
            {
                m=0;
                break;
            }
        }
        if (m)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
