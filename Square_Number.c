#include<stdio.h>
int main()
{
    int n,i,c;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i*i==n){
            printf("True");
            c=1;
            break;
        }
    }
    if(c!=1)
    {
        printf("False");
    }
}