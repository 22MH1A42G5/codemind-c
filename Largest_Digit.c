#include<stdio.h>
int main()
{
    int a,b,c,i,j,max=0;
    scanf("%d",&a);
    while(a!=0)
    {
        b=a%10;
        if(b>max)
        {
            max=b;
        }
        a=a/10;
    }
    printf("%d",max);
}