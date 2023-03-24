#include<stdio.h>
int add(int a[],int s,int l,int n)
{
    if(l>=n)
    return s;
    else
    return add(a,s+a[l],l+1,n);
}
int main()
{
    int n,s,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    s=add(a,0,0,n);
    printf("%d",s);
}