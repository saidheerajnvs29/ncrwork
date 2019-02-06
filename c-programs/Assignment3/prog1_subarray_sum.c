#include<stdio.h>
#include<math.h>

int main()
{
	int n,a[20],i,j,given_sum,calci_sum=0,flag=0;
	printf("enter the numbe rof elements");
	scanf("%d",&n);
	printf("enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the sum");
	scanf("%d",&given_sum);
	i=0;
	j=0;
	while(i<n || j<n)
	{
		
		if(calci_sum<given_sum)
		{
			calci_sum+=a[j];
			if(calci_sum<given_sum)
			{
				j++;	
			}
			else if(calci_sum==given_sum)
			{
				flag=1;
				break;
			}
		}
		else if(calci_sum>given_sum)
		{
			calci_sum-=a[i];
			i++;	
		}
		else
		{
			if(given_sum!=0)
			{
				flag=1;
				break;
			}
			break;
		}
		
	}
	if(flag==1)
	{
		printf("found at index %d  and %d",i,j);
	}
	else
	{
		printf("no subarray found");
	}
	return 0;
}

