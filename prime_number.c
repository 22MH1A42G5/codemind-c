#include<stdio.h>
int prime(int a)
{
    int t=(a/2)+1,c=1;
    for(int i=2;i<=t;i++){
        if(a%i==0){
            c=0;
            break;
        }
    }
    if(c)
    return 1;
    else
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    if(prime(n))
    printf("prime");
    else
    printf("not a prime");
}