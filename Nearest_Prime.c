#include<stdio.h>
int main()
{
    int a,b=0,c=0,d,e=0,f=0,g,i,j,k,l,m,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        e=0;
        b=0;
        scanf("%d",&a);
        for(j=a;j>0;j++)
        {
        	b++;
        	c=0;
            for(k=1;k<=j;k++)
            {
                if(j%k==0)
                {
                    c++;
                }
            }
             if(c==2)
                {
                    d=j;
                    break;
                }
        }
        for(l=a;;l--)
        {
                e++;
                f=0;
            for(m=1;m<=l;m++)
            {
                if(l%m==0)
                {
                    f++;
                }
            }
             if(f==2)
                {
                    g=l;
                    break;
                }
        }
      
    if(e<=b)
    {
        printf("%d
",g);
    }
    else
    {
        printf("%d
",d);
    }
        }
  
}