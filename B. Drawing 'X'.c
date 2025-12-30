#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int n=N/2;
    for(int row=1;row<=N;row++)
    {
        for(int col=1;col<=N;col++)
        {
            if((n+1)==row && (n+1)==col)
                printf("X");
            else if(row==col)
                printf("\\");
            else if(row+col==N+1)
                printf("/");
            else
                printf("*");
        }
        printf("\n");
    }
    return 0;
}
