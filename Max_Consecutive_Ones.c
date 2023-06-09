#include<stdio.h>
int max(int b[],int n)
{
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(b[i]>max)
        {
            max=b[i];
        }
    }
    return max;
}
int main()
{
    int c=0,n,i;
    scanf("%d",&n);
    int a[n],b[n],j=0;
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            c++;
           
        }
        else
        {
        c=0;
        }
        b[i]=c;  
    }
    printf("%d",max(b,n));
    
}