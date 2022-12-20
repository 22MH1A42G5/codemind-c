#include<stdio.h>
int main()
{
    int a,b,c,i=0,d,r=0;
    scanf("%d",&a);
    b=a*a;
    while(a!=0)
    {
        c=a%10;
        i=i*10+c;
        a=a/10;
    }
    d=i*i;
    while(d!=0)
    {
        c=d%10;
        r=r*10+c;
        d=d/10;
    }
    
    if(b==r)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}