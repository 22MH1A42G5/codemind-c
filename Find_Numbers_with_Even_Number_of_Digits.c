#include<stdio.h>
int no_of_digits(int n){
    int d=0;
    while(n!=0){
        d++;
        n/=10;
    }
    return d;
}
int main(){
    int n,ans=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(int i=0;i<n;i++){
        if(no_of_digits(arr[i])%2==0){
            ans++;
        }
    }
    printf("%d",ans);
}