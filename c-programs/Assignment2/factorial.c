#include<stdio.h>
#include<math.h>
int main()
{
	int n,val=1;
	printf("enter the value");
	scanf("%d",&n);
	while(n>1)
	{
		val*=n;
		n--;
	}
	printf("The value entered is %d",val);
	return 0;
}

