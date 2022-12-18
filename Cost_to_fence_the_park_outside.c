#include<stdio.h>
int main()
{
    int l,b,d,c,ba,sa;
    scanf("%d%d%d%d",&l,&b,&c,&d);
    sa=l*b;
    ba=((l+(2*c))*(b+(2*c)));
    printf("%d",(ba-sa)*d);
}