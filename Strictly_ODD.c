#include<stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(i%2==1)
        {
            if(a[i]%2==1)
            {
                c++;
            }
            else
            {
                c=0;
                break;
            }
        }
    }
    if(c==0)
    {
        printf("False");
    }
    else
    printf("True");
}