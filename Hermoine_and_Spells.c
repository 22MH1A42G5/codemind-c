#include<stdio.h>
int main()
{
    int max,max2,i;
    int a[100];
    scanf("%d%d%d",&a[0],&a[1],&a[2]);
    max=a[0];
    for(i=0;i<3;i++)
    {
        if(a[i]>max)
        max=a[i];
    }
    for(i=0;i<3;i++)
    {
        if(max!=a[i])
        {
        if(a[i]>max2)
        max2=a[i];
        }
    }
    printf("%d",max+max2);
}