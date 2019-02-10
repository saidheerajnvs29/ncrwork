#include <stdio.h>
#include <string.h>
char rev[100];
int strcomp(char s[50],char t[50])
{
	int i=0;
	while(s[i]==t[i])
	{
		if(s[i]=='\0')
			return 0;
		i++;
	}
	return s[i]-t[i];
}
char *strev(char s[50])
{
	int i=0,j=strlen(s)-1;
	while(i<strlen(s))
	{
		rev[i]=s[j];
		i++;j--;
	}
	return rev;
}
char *strconcat(char *src,char *dest)
{
	int i,j;
	for (i = 0; dest[i] != '\0'; i++)
        ;
    for (j = 0; src[j] != '\0'; j++)
        dest[i+j] = src[j];
    dest[i+j] = '\0';
    return dest;
}
void strcopy(char *a,char *b)
{
	int i=0;
	while((a[i]=b[i])!='\0')
	i++;
	printf("the copied string is %s\n",a);
	return ;
}
int main(int argc, char const *argv[])
{
	char s[50],t[50],*cat,*rev;
	int n;
	printf("1-reverse of string\n2-concatenate strings\n3-copy strings\n4-compare strings\n");
	scanf("%d",&n);
	if(n==1)
	{
		printf("enter the string\n");
		scanf("%s",s);
		rev=strev(s);
		printf("reverse of string %s is\n", s);
		printf("%s\n", rev);
	}
	else if(n==2)
	{
		printf("Enter the strings to conctenate\n");
		scanf("%s",s);
		scanf("%s",t);
		cat=strconcat(s,t);
		printf("Concatenated string is\n");
		printf("%s\n", cat);
	}
	else if(n==3)
	{
		printf("Enter the strings to copy\n");
		scanf("%s",s);
		strcopy(cat,s);
		printf("copied string is\n");
		printf("%s\n", cat);
	}
	else if(n==4)
	{
		printf("Enter the strings to compare\n");
		scanf("%s",s);
		scanf("%s",t);	  
		if(strcomp(s,t)==0)
		{
			printf("The strings are equal\n");
		}
		else
		{	
			printf("The strings are unequal\n");
		}
	}
	return 0;
}

