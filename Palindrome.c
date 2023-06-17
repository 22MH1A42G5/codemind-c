#include<stdio.h>
int palind(int a){
    int r,rev=0,t;
    t=a;
    while(t){
        r=t%10;
        rev=rev*10+r;
        t=t/10;
    }
    if(rev==a)
    return 1;
    else
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    if(palind(n))
    printf("True");
    else
    printf("False");
}