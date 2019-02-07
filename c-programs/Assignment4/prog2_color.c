#include<stdio.h>

int main()
{
	char *color[6]={"red","green","blue","white","black","yellow"};
	printf("color = %d\n",color);
	printf("color+1 = %d\n",(color+1));
	printf("*color = %s\n",*(color));
	printf("*(color+1) = %s\n",*(color+1));
	printf("color[5] = %s\n",color[5]);
	printf("*(color+5) = %s\n",*(color+5));
	return 0;
}

