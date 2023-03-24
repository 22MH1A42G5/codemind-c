#include<stdio.h>
int main()
{
    int n,m,b,c=0,i,j,ans=0;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
    	c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==2)
        {
        	ans++;
		}
    }
    printf("%d",ans);
}