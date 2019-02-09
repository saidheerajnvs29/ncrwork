#include<stdio.h>
#include<ctype.h>
int main()
{
	int n,i,j,k;
	char **s,ch[100];
	printf("enter the number of strings\n");
	scanf("%d",&n);
	s=(char **)malloc(n*sizeof(char *));
	printf("enter the strings\n");
	for(i=0;i<n;i++)
	{
		scanf("%s",ch);
		s[i]=(char *)malloc(strlen(ch)*sizeof(char));
		strcpy(s[i],ch);
	}
	
	printf("\nthe entered strings are :\n");
	for(i=0;i<n;i++)
	{
		printf("%s\n",s[i]);
	}
	return 0;
}

