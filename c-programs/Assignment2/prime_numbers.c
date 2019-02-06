#include<stdio.h>
#include<math.h>
void check(int n)
{
	int i,flag=0;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("%d is a prime number\n",n);
	}
}
int main()
{
	int n1,n2,i;
	printf("enter the values");
	scanf("%d %d",&n1,&n2);
	for(i=n1;i<=n2;i++)
	{
		check(i);
	}

	return 0;
}

