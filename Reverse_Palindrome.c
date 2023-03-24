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
    int n,p,t,k,rev;
    scanf("%d",&n);
    t=n;
    back:
    rev=reverse(t);
    p=rev+t;
    k=reverse(p);
    if(p==k)
    {
        printf("%d",k);
    }
    else
    {
        t=p;
        goto back;
        
    }
}