#include<stdio.h>
int main()
{
    int a,b,c=0,d,s=0,k=0,i,j,r;
    scanf("%d",&a);
    for(i=a;i!=0;i=i/10)
    {
        b=i%10;
        k++;
        for(j=a;j!=0;j=j/10)
        {
              r=j%10;
              if(b==r)
              {
                  c++;
              }
        }
    }
    if(c==k)
    {
        printf("Unique Number");
    }
    else
    {
        printf("Not Unique Number");
    }
}