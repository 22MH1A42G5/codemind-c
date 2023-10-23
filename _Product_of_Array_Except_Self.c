#include<stdio.h>
int main(){
    int n,p,k=0;
    scanf("%d",&n);
    int arr[n],brr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(int i=0;i<n;i++){
        p=1;
        for(int j=0;j<n;j++){
            if(j!=i){
                p*=arr[j];
            }
        }
        brr[k++]=p;
    }
    for(int i=0;i<n;i++)
    printf("%d ",brr[i]);
}