#include<stdio.h>
#include<stdlib.h>
bool contains(int k,int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]==k)
        return true;
    }
    return false;
}
int count(int arr[],int k,int n){
    int cnt=0;
    for(int i=0;i<n;i++){
        if(arr[i]==k)
        cnt++;
    }
    return cnt;
}
int main(){
    int n,j=0,ans=0,t;
    scanf("%d",&n);
    int arr[n],brr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(contains(arr[i],brr,j)==false){
            brr[j++]=arr[i];
            t=count(arr,arr[i],n)/2;
            ans=ans+t;
        }
    }
    printf("%d",ans);
    
    
}