#include <stdio.h>
#include <string.h>

void delete(char *s, int ch)
{
	int i=0,j,k;
    for(j=0;j<strlen(s);j++)
	{
		if(s[j]==ch)
		{
			for(k=i;k<j;k++)
			{
				printf("%c",s[k]);
			}
			printf("\n");
			i=j+1;
		}
	}
	for(k=i;k<j;k++)
	{
		printf("%c",s[k]);
	}
}

int main()
{
    char str[100];
    int ch;
    printf("enter a string\n");
    gets(str);
    printf("enter the delimiter\n");
    ch = getchar();
    delete(str, ch);
    return 0;

}

