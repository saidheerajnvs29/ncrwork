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
	int n,count=0,i,j,given_sum,calci_sum=0,flag=0;
	int a[8]={10,20,30,40,50,60,70,80};
	printf("enter the hexadecimal number");
	scanf("%x",&n);
	printf("1-ones compliment\n2-masking operation\n3-bit shift operation\n4-exit");
	scanf("%d",&flag);
	if(flag==1)
	{
		for(int i=0;i<8*sizeof(int);i++)
		{
			
		}
		
	}
	printf("%d",n);
	return 0;
}

