#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    if(n>=3){
    for(i=0;i<(2*n);i++)
    {
        if(i<=n)
        {
        for(j=0;j<i;j++)
        {
            printf("*");
        }
        if(i!=0 && j!=0)
        printf("
");
        }
        else
        {
            for(int k=0;k<=(2*n)-i-1;k++)
            {
                printf("*");
            }
            printf("
");
        }
    }
    }
    else{
        printf("The pattern is not possible");
    }
}