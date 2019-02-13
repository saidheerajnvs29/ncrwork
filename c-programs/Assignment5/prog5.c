#include<stdio.h>
int month1[12]={31,28,31,30,31,30,31,31,30,31,30,31};
typedef struct diff 
{
	int day,month,year;	   
}differ;

int main()
{
	differ d1,d2;
	long int sum1=0,sum2=0,i,j,flag=0,n,m;
	printf("enter day month year of first variable\n");
	scanf("%d %d %d",&d1.day,&d1.month,&d1.year);	 
	printf("enter day month year of second variable\n");
	scanf("%d %d %d",&d2.day,&d2.month,&d2.year);
	sum1+=365*d1.year+d1.day;
	for(i=0;i<d1.month-1;i++)
	{
		sum1+=month1[i];
	}	 
/*	  printf("%ld\n",sum1);*/
	sum2+=365*d2.year+d2.day;
	for(i=0;i<d2.month-1;i++)
	{
		sum2+=month1[i];
	}
/*	  printf("%ld\n",sum2);*/
	sum1+=(d1.year/4)-(d1.year/100)+(d1.year/400);
	sum2+=(d2.year/4)-(d2.year/100)+(d2.year/400);
	printf("%ld\n",sum2-sum1);	  
	return 0;
}

