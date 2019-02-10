#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int i,j;
	char s[50];
	printf("Enter the string\n");
	scanf("%s",s);
	for(i=0;i<strlen(s);i++)
	{
		printf("%s",s+i);
		for(j=0;j<i;j++)
			printf("%c",s[j]);
		printf("\n");
	}
	return 0;
}

