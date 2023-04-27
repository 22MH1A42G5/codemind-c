#include<stdio.h>
#include<math.h>
int main()
{
    int a,c,i,j;
    scanf("%d",&a);
    int n;
    n=a/3;
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            if(i*i+j*j==a)
            {
            c=1;
            break;
            }
        }
        if(c==1)
        break;
    }
    if(c==1)
    printf("True");
    else
    printf("False");
}