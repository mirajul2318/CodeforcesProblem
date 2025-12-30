#include<stdio.h>
int main()
{
    int row,col,c=0,m,n;
    scanf("%d %d",&m,&n);
    for(row=1;row<=m;row++)
    {
        for(col=1;col<=n;col++)
        {
            if(row%2 != 0)
                printf("#");
            else
            {
                 c++;
                 if(c%2 != 0)
                 {
                      for(col=1;col<n;col++)
                      {
                         printf(".");
                      }
                      if(col==n)
                      printf("#");
                 }
                 else
                 {
                     if(col==1)
                      printf("#");
                   for(col=2;col<=n;col++)
                      {
                         printf(".");
                      }
                 }
            }
        }
        printf("\n");
    }
    return 0;
}
