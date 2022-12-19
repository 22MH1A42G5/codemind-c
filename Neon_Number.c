#include<stdio.h>
int main()
{
    int a,b,c,r=0;
    scanf("%d",&a);
    b=a*a;
    while(b!=0)
    {
        c=b%10;
        r=r+c;
        b=b/10;
    }
    if(a==r)
    printf("Neon Number");
    else
    printf("Not Neon Number");
}