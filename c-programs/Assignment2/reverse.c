#include<stdio.h>
#include<math.h>

int main()
{
	int n,temp=0;
	printf("enter the value");
	scanf("%d",&n);
	while(n!=0)
	{
		temp*=10;
		temp+=n%10;
		n/=10;
	}
	printf("reverse of a number is %d",temp);
	return 0;
}

