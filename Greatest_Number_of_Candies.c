#include<stdio.h>
int maxi(int a[],int n)
{
    int m=0,i;
    for(i=0;i<n;i++)
    {
        if(a[i]>m){
            m=a[i];
        }
    }
    return m;
}
int main(){
    int n,i,max,t;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%d",&t);
    max=maxi(a,n);
    for(i=0;i<n;i++)
    {
        if(a[i]+t>=max)
        printf("True ");
        else
        printf("False ");
    }
}