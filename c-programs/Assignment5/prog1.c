#include<stdio.h>
typedef struct time
{
	int hrs,min,sec;
}Time;
int main()
{
	Time t1;
	printf("enter the hours: ");
	scanf("%d",&t1.hrs);	
	printf("enter the minutes: ");
	scanf("%d",&t1.min);	
	printf("enter the seconds: ");
	scanf("%d",&t1.sec);
	printf("the time is %d:%d:%d\n",t1.hrs,t1.min,t1.sec);	  
	return 0;
}

