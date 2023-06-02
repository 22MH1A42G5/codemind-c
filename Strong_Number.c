#include<stdio.h>
int fact(int n){
    int p=1;
    while(n)
    {
        p=p*n;
        n--;
    }
    return p;
}
int main()
{
    int t,a,s=0,te,r;
    scanf("%d",&t);
    while(t--)
    {
        s=0;
        scanf("%d",&a);
        te=a;
        while(te){
            r=te%10;
            s=s+fact(r);
            te=te/10;
        }
        
        if(a==s)
        {
            printf("Strong
");
        }
        else
        printf("Not Strong
");
    }
}