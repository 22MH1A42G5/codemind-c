#include<stdio.h>
int main()
{
    int a=0,b=1,c,d=0,n,i;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(a==n)
        {
            d++;
            break;
        }
        c=a+b;
        a=b;
        b=c;
    }
    if(d==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}