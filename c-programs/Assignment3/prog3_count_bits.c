#include<stdio.h>
#include<math.h>
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{
	int n,a[20],count=0,i,j,given_sum,calci_sum=0,flag=0;
	printf("enter the number");
	scanf("%d",&n);
	for(i=0;i<10;i++)
	{
		if((n&(1<<i))==(1<<i))
		{
			
			count++;
		}
	}
	printf("the number of ones bits are %d",count);
	return 0;
}

