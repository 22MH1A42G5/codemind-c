#include<stdio.h>
void selsort(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    selsort(a,n);
    for(i=0;i<n;i++)
    {
        if(a[0]>1 && a[i]>0)
        {
            printf("1");
            break;
        }
        else if(a[i+1]!=a[i]+1 && a[i]>0)
        {
            printf("%d ",a[i]+1);
            break;
        }
    }
}