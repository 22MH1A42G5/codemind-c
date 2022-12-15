#include<stdio.h>
int main()
{
    int a,b,c,i,d=1;
    scanf("%d%d%d",&a,&b,&c);
    while(a>0)
    {
        if(a>(b*c))
        {
            d++;
        }
        a=a-(b*c);
    }
    printf("%d",d);
}