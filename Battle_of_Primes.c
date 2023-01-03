#include<stdio.h>
int main()
{
    int a,b,c,d=0,e,i,j,f;
    scanf("%d%d",&a,&b);
    c=a+b;
    for(i=c+1;;i++)
    {
        d=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                d++;
            }
        }
             if(d==2)
             {
                 f=i;
                 break;
             }
        
    }
    printf("%d",f-c);
}