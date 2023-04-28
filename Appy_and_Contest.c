#include<stdio.h>
int main()
{
    int t,n,a,b,k,c=0,i,j=0;
    scanf("%d",&t);
    while(t--)
    {
        c=0;
        scanf("%d%d%d%d",&n,&a,&b,&k);
        for(i=1;i<=n;i++)
        {
            if(i%a==0  && i%b==0){
                continue;
            }
            else if(i%b==0){
                c++;
            }
            else if(i%a==0){
                c++;
            }
        }
        //printf("%d",c);
        if(c>=k)
        printf("Win
");
        else
        printf("Lose
");
    }
}