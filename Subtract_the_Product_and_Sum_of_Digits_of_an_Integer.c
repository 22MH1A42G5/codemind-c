#include<stdio.h>
int main()
{
    int a,b,r=0,k=1;
    scanf("%d",&a);
    while(a!=0)
    {
        b=a%10;
        k=k*b;
        r=r+b;
        a=a/10;
    }
    printf("%d",k-r);
}