#include<stdio.h>
void fun(int l,int n)
{
    if(n<l)
    return;
    else{
    printf("%d ",l);
    fun(l+1,n);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    fun(1,n);
}