#include<stdio.h>
int main()
{
    int n, j = 0;
    scanf("%d", &n);
    char s[55];
    scanf("%s", s);
    for(int i = 0; i < n ; i++)
    {
        if(s[i] == s[i+1])
        {
            j++;
        }
    }
    printf("%d\n", j);
    return 0;
}
