#include<stdio.h>
struct complex
{
	int real,img;
};
enum operations{add,subtract,multiply,divide}; 
int main()
{
	int i=1;
	char *ch=(char *)&i;
	int *c=(int *)&ch;
	if(*c==0)
	{
		printf("it is big endian");
	}
	else
	{
		printf("it is little endian %d\n,",c);	  
	}
	return 0;
}

