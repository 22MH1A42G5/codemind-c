#include<stdio.h>
int main()
{
    int a,b,c=1,r=0,i,h,k=1;
    scanf("%d",&a);
    h=a;
    while(a!=0)
    {
        c=1;
        b=a%10;
        r=r+b;
        k=k*b;
        a=a/10;
    }
    //printf("%d %d
",r,k);
    if(k==r)
    printf("Spy Number");
    else
    printf("Not Spy Number");
}