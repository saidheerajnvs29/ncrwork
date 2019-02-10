#include <stdio.h>
#include <string.h>
void expand(char *s1,char *s2)
{
	int len=0,i,j;
	
	int k=0;
	for(i=0;i<strlen(s1);i++)
	{
		len++;
		if(s1[i]=='-')
		{
			len+=s1[i+1]-s1[i-1]-1;
		}
	}
	s2=(char *)malloc(len*sizeof(char));
	for(i=0;i<strlen(s1);i++)
	{
		
		if(s1[i]!='-')
		{
			s2[k]=s1[i];
			k++;
		}
		else
		{
			for(j=1;j<s1[i+1]-s1[i-1];j++)
			{
				s2[k]=s1[i-1]+j;
				k++;
			}
		}
	}
	s2[k]='\0';
	printf("the expanded string is %s",s2);
}
int main()
{
    char *s1,ch[100],*s2;
	int a[26],i,j;
    printf("enter a string s1\n");
    gets(ch);
	s1=(char *)malloc(strlen(ch)*sizeof(char));
	strcpy(s1,ch);
    expand(s1,s2);
/*	  printf("%s",s2);*/
    
    return 0;

}

