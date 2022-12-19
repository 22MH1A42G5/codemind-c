#include<stdio.h>
int main()
{
    int a,b,c=1,r=0,i,h;
    scanf("%d",&a);
    h=a;
    while(a!=0)
    {
        c=1;
        b=a%10;
        for(i=1;i<=b;i++)
        {
            c=c*i;
        }
        r=r+c;
        a=a/10;
    }
    if(h==r)
    printf("The number %d is a strong number",h);
    else
    printf("The number %d is not a strong number",h);
}