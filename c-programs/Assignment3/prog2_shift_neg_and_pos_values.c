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
	int n,a[20],i,j,given_sum,calci_sum=0,flag=0;
	printf("enter the number of elements");
	scanf("%d",&n);
	printf("enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	i=0;j=n-1;
	while(i!=j)
	{
		if(a[i]>0)
		{
			swap(&a[i],&a[j]);
			j--;
		}
		else
		{
			i++;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}

