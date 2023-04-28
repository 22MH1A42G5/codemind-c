#include<stdio.h>
int main()
{
    int a,b,n,c,i;
    scanf("%d",&n);
    while(n--)
    {
        c=0;
        scanf("%d%d",&a,&b);
        for(i=a;i<=b;i++){
            if(i%10==2 || i%10==3 || i%10==9)
            {
                c++;
            }
        }
        printf("%d
",c);
    } 
}