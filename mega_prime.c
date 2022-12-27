#include<stdio.h>
int main()
{
    int a,b,c=0,n,i,k=0,s=0,j=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        
        while(a!=0)
        {
            n=a%10;
            j++;
            s=0;
            for(i=1;i<=n;i++)
            {
                if(n%i==0)
                {
                    s++;
                }
            }
            if(s==2)
            {
                k++;
            }
            a=a/10;
        }
        if(j==k)
        {
            printf("Mega Prime");
        }
        else
        {
        printf("Not Mega Prime");
        }
    }
    else
    printf("Not Mega Prime");
}