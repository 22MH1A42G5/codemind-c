#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=1;
        for(j=i;j<=n;j++)
        {
            printf("%d",k++);
        }
        printf("
");
    }
}