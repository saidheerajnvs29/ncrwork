#include<stdio.h>
#include<math.h>
int main()
{
	char binary[20];
	printf("enter the binary value");
	scanf("%s",binary);
	int val=0,i;
	for(i=0;i<strlen(binary);i++)
	{
		if(binary[i]==1)
		{
			val+=pow(2,strlen(binary)-1-i);
		}	 	 
	}
	printf("the entered value is %d\n",val);
	return 0;
}

