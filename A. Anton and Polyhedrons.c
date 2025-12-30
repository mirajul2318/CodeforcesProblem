#include<stdio.h>
int main()
{
    int n,s=0;
    char a[15];
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%s",&a);
        int d=strcmp(a,"Tetrahedron");
        if(d==0)
        {
           s=s+4;
        }
        d=strcmp(a,"Cube");
        if(d==0)
        {
           s=s+6;
        }
        d=strcmp(a,"Octahedron");
        if(d==0)
        {
           s=s+8;
        }
        d=strcmp(a,"Dodecahedron");
        if(d==0)
        {
           s=s+12;
        }
        d=strcmp(a,"Icosahedron");
        if(d==0)
        {
           s=s+20;
        }
    }
    printf("%d\n",s);
    return 0;
}
