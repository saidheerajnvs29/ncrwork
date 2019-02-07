#include<stdio.h>
void reverse(char *ch)
{
	if(*ch!='\0')
	{
		reverse(ch+1);
	}
	printf("%c",*ch);
		
}

int main()
{
	char ch[6]="hello";
	reverse(ch);
	return 0;
}

