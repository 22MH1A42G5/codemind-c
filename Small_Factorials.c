#include<stdio.h>
int main()
{
    int a,b,n,f=1,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=1;
        scanf("%d",&a);
        for(j=1;j<=a;j++)
        {
            f=f*j;
        }
        printf("%d
",f);
    }
}