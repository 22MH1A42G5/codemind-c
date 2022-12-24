#include<stdio.h>
int main()
{
    int a,b,min;
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        min=b;
    }
    else
    {
        min=a;
    }
    for(min;;min--)
    {
        if(a%min==0 && b%min==0)
        {
            printf("%d",min);
            break;
        }
    }
}