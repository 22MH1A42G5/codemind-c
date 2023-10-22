#include<stdio.h>
void Sort(int a[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
int main(){
    int n,j=0;
    scanf("%d",&n);
    int arr[n],brr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(int i=0;i<n;i++)
    brr[j++]=arr[i]*arr[i];
    Sort(brr,n);
    for(int i=0;i<n;i++)
    printf("%d ",brr[i]);
}