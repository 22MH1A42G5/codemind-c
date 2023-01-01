#include<stdio.h>
int main()
{
    int n,min,i,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[3];
    for(i=0;i<n;i++)
    {
        if(min<a[i])
        {
            min=a[i];
        }
    }
    for(min;min>0;min--)
    {
        c=0;
        for(i=0;i<n;i++)
        {
        if(a[i]%min==0)
        {
           c++;
        }
        }
    if(c==n)
    {
        printf("%d",min);
        break;
    }
    }
}