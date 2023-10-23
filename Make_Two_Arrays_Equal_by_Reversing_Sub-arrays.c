#include<stdio.h>
bool contains(int k,int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]==k)
        return true;
    }
    return false;
}
int main(){
    int n,cnt=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int n1;
    scanf("%d",&n1);
    int brr[n1];
    for(int i=0;i<n1;i++)
    scanf("%d",&brr[i]);
    for(int i=0;i<n1;i++){
        if(contains(brr[i],arr,n)){
            cnt++;
        }
    }
    if(cnt==n)
    printf("True");
    else
    printf("False");
}