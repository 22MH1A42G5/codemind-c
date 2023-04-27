#include<stdio.h>
int main()
{
    int a,i;
    float sum=0,f;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        f=i;
        sum=sum+(1/f);
    }
    printf("%.2f",sum);
}