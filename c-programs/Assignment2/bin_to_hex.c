#include<stdio.h>
#include<math.h>
int main()
{
	int binary,val=0,i=0,r;;
	printf("enter the binary value");
	scanf("%d",&binary);
	while(binary!=0)
	{
		if((binary%10)==1)
		{
			val+=pow(2,i);
		}
		binary/=10;
		i++;
	}
	printf("the entered value is %x\n",val);
	
	return 0;
}

