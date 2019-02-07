#include<stdio.h>
#include<math.h>
void itob(int n)
{
	int val;
	if(n==0)
		return;
	itob(n/2);
	printf("%d",n%2);
}
int main()
{
	int n,count=0,i,j,given_sum,calci_sum=0,flag,val1,val2,p,b;
	printf("enter the number");
	scanf("%d",&n);
	printf("the binary representation is : ");
	itob(n);
	printf("\n");
	printf("the hexadecimal representation is : %x\n",n);
	return 0;
}

