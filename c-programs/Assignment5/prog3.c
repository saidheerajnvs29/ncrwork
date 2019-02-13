#include<stdio.h>
struct complex
{
	int real,img;
};
enum operations{add,subtract,multiply,divide}; 
int main()
{
	enum operations op;
	struct complex c1,c2,c3;
	c1.real=3;
	c1.img=4;
	c2.real=5;
	c2.img=7;
	scanf("%d",&op);
	if(op==add)
	{
		printf("real is %d\nimaginary is %d\n",(c1.real+c2.real),(c1.img+c2.img));	  
	}	
	else if(op==subtract)
	{
		printf("real is %d\nimaginary is %d\n",(c1.real-c2.real),(c1.img-c2.img));
	}
	else if(op==multiply)
	{
		printf("real is %d\nimaginary is %d\n",((c1.real)*(c2.real)),((c1.img)*(c2.img)));
	}
	else if(op==divide)
	{
		printf("real is %d\nimaginary is %d\n",(c1.real/c2.real),(c1.img/c2.img));	
	} 
	return 0;
}

