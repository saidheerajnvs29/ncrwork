#include<stdio.h>
#include<math.h>
int main()
{
	int n,count=0,i,j,given_sum,calci_sum=0,flag,val1,val2,p,b;
	printf("enter the number");
	scanf("%d",&n);
	printf("enter the position");
	scanf("%d",&p);
	printf("enter the number of bits");
	scanf("%d",&b);
	for(i=0;i<b;i++)
	{
		n=(n^(1<<(31-p-b)));
	}	 
	printf("%d\n",n);
	return 0;
}

