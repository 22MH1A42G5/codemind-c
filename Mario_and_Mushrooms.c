#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d",&a);
    if(a%3==0 )
    {
        printf("NORMAL");
    }
    else if(a%3==1 )
    {
        printf("HUGE");
    }
    else if(a%3==2 )
    {
        printf("SMALL");
    }
}