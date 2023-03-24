#include<stdio.h>
int reverse(int t)
{
    int rem,rev=0;
    while(t>0)
    {
        rem=t%10;
        rev=rev*10+rem;
        t=t/10;
    }
    return rev;
}
int main()
{
    int m,n,rev,i;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
        rev=reverse(i);
        if(rev==i)
        {
            printf("%d ",i);
        }
    }
}