#include<stdio.h>
int main()
{
    int n,a,i,c;
    scanf("%d",&n);
    while(n--)
    {
        c=0;
        scanf("%d",&a);
        for(i=1;i<=(a/3)+1;i++)
        {
            if(i*i==a)
            {
                c++;
            }
        }
        if(c==1)
        printf("True
");
        else
        printf("False
");
    }
}