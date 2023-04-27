#include<stdio.h>
int palind(int a)
{
    int n,rev=0,rem;
    n=a;
    while(a>0)
    {
        rem=a%10;
        rev=rev*10+rem;
        a=a/10;
    }
    if(n==rev)
    return 1;
    else
    return 0;
}
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    for(i=a;i<b;i++)
    {
        if(palind(i)==1)
        {
        printf("%d ",i);
        }
    }
}