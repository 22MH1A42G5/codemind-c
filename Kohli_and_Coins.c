#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    if(a%10==0)
    {
        printf("%d",a/10);
    }
    else if(a%5==0)
    {
        printf("%d",a/10+1);
    }
    else
    printf("-1");
}