#include<stdio.h>
int main()
{
    int n,k,x,y,b,am;
    scanf("%d%d%d%d",&n,&k,&x,&y);
    b=n-k;
    am=(k*x);//finish
    if(x<=y)
    {
        am=am+(b*x);
    }
    else
    {
         am=am+(b*y);
    }
    
    printf("%d",am);
   
}