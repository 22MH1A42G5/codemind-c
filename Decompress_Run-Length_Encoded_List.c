#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,bn=0,j=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(int i=0;i<n;i++){
        if(i%2==0)
        bn+=arr[i];
    }
    int brr[bn];
    for(int i=0;i<n;i=i+2){
        while(arr[i]!=0){
            brr[j++]=arr[i+1];
            arr[i]--;
        }
    }
    for(int i=0;i<bn;i++)
    printf("%d ",brr[i]);
}