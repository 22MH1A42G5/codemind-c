#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,r=0,i=0,s,f=0;
    scanf("%d",&a);
    s=a;
    while(a!=0)
    {
        b=a%10;
        r=r*10+b;
        a=a/10;
    }
    while(r!=0)
    {
        c=r%10;
        i++;
        d=pow(c,i);
        r=r/10;
        f=f+d;
    }
    if(s==f)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}