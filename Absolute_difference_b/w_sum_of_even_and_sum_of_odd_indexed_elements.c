#include<stdio.h>
#include<math.h>
int main()
{
    int a,i,sum=0,odd=0;
    scanf("%d",&a);
    int s[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&s[i]);
        if(i%2==0)
        {
            sum=sum+s[i];
        }
        if(i%2==1)
        {
            odd=odd+s[i];
        }
    }
    printf("%d",abs(sum-odd));
}