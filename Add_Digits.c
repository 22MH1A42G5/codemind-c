#include<stdio.h>
int main()
{
    int a,b,c=0,d;
    scanf("%d",&a);
    loop:
    while(a!=0)
    {
        b=a%10;
        c=c+b;
        a=a/10;
    }
    if(c>9)
    {
         a=c;
         c=0;
         goto loop;
    }
    else
    printf("%d",c);
}