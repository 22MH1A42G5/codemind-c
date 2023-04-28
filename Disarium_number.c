#include<stdio.h>
#include<math.h>
int main()
{
	int a,i,sum=0,dig=0,n,rem,j,po=1,te,temp;
	scanf("%d",&a);
	n=a;
	temp=a;
	while(a){
		dig++;
		a=a/10;
	}
	i=dig;
	while(n>0){
		rem=n%10;
		te=i;
		po=1;
		while(te--){
			po=po*rem;
			
		}
		sum=sum+po;
		i--;
		n=n/10;
	}
	if(temp==sum)
	printf("True");
	else
	printf("False");
}