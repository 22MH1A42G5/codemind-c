#include<stdio.h>
int main()
{
    int n,max,i,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }    
        for(max;;max++)
        {
            c=0;
            for(i=0;i<n;i++)
            {
            if(max%a[i]==0)
            {
               c++;
            }
            }
            if(c==n)
            {
                printf("%d ",max);
                break;
            }
        }
}