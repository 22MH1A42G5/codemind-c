#include<stdio.h>
int main()
{
    int n,a,b,c=0,d,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        d=a;
        c=0;
        while(a!=0)
        {
            b=a%10;
            c=c*10+b;
            a=a/10;
        }
        if(d==c)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}