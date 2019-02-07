#include<stdio.h>
#include<math.h>
int main()
{
	int n,count=0,i,j,given_sum,calci_sum=0,flag,val1,val2;
	printf("enter the hexadecimal number");
	scanf("%x",&n);
	printf("1 for chcking last 3 bits\n2 for reverse the byte order\n3 for rotate four bits\n");
	scanf("%d",&flag);
	if(flag==1)
	{
		for(i=0;i<4;i++)
		{
			if((n&(1<<i))==(1<<i))
			{
				count++;
			}
		}
		if(count>=3)
		{
			printf("atleast last three of four bits are on\n");
		}
		else
		{
			printf("not even 3 bits are on");
		}
	}
	else if(flag==2)
	{
		val1=n&0x00ff;
		val1=val1<<8;
	
		val2=n&0xff00;
		val2=val2>>8;
		val1=val1|val2;
		printf("%x",val1);
	}
	else if(flag==3)
	{
		val1=((n>>4)&(n<<(28)));
		val1=val1|(n>>4);
		printf("%x\n",(n>>4));
		printf("%x\n",(n<<28));
		printf("%x\n",val1);	
	}
	return 0;
}

