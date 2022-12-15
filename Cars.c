#include<stdio.h>
int main()
{
    int a,f;
    scanf("%d",&a);
    f=a/4;
    if((a%4)!=0)
    {
        f++;
    }
   printf("%d",f);
}