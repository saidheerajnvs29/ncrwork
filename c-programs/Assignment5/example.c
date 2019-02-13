#include<stdio.h>
int i=0;
void func()
{
	i++;
}

int main()
{
	func();
	printf("%d\n",i);	 
	return 0;
}

