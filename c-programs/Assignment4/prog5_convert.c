#include<stdio.h>
#include<ctype.h>
int main()
{

	int i,option;
	char *s,ch[50];
	printf("1- lower to upper\n2-upper to lower\n");
	scanf("%d",&option);
	if(option==1)
	{
		printf("enter the lower case letters\n");
		scanf("%s",ch);	
		s=(char *)malloc(strlen(ch)*sizeof(char));
		strcpy(s,ch);
		for(i=0;i<strlen(s);i++)
		{
			s[i]=s[i]-'a'+'A';
		}   
	}
	else if(option==2)
	{
		printf("enter the upper case letters\n");
		scanf("%s",ch);	
		s=(char *)malloc(strlen(ch)*sizeof(char));
		strcpy(s,ch);
		for(i=0;i<strlen(s);i++)
		{
			s[i]=s[i]-'A'+'a';
		}   	   
	}
	printf("%s",s);
	return 0;
}

