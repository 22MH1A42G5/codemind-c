#include<stdio.h>
int main()
{
    int i,a,b,c,r=0;
    scanf("%d",&a);
    c=a;
    while(a!=0)
    {
        b=a%10;
        r=r*10+b;
        a=a/10;
    }
    if(c==r)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}