#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=n;
        for(j=1;j<=n;j++)
        {
            printf("%d ",k--);
        }
        printf("
");
    }
}