#include<stdio.h>
int main()
{
    int n; 
    scanf("%d",&n);
    if(n==1 || n==2 || n==3 || n==4 || n==5 || n==6 || n==8 || n==9 || n==10 || n==12 || n==15)
    printf("Ugly Number");
    else
    printf("Not Ugly Number");
}