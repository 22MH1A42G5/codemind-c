#include<stdio.h>
int main()
{
    int a,r,rev=0,c=0,e=0,o=0;
    scanf("%d",&a);
    while(a!=0)
    {
        r=a%10;
        c++;
        if(r%2==0)
        e++;
        else
        o++;
        a=a/10;
    }
    if(c==e)
    printf("Even");
    else if(c==o)
    printf("Odd");
    else
    printf("Mixed");
}