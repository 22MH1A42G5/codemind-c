#include<stdio.h>
int main()
{
    int a,b=0,c,d,i;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if(a==i*i)
        {
            b++;
            break;
        }
    }
    if(b==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}