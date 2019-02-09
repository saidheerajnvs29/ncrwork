#include<stdio.h>
#include<ctype.h>
int main()
{
	int n,i,j,k;
	char **s,ch[100];
	char ch1[100]="mad";
	char ch2[100]="uma";
	printf("%d",strcmp(ch1,ch2));
	strcpy(ch1,ch2);
	printf("%s\n",ch1);
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
	for(i=1;i<n;i++)
	{
		j=i-1;
		strcpy(ch1,s[i]);
		while(j>=0)
		{
			if(strcmp(ch1,s[j])<0)
			{
				strcpy(s[j+1],s[j]);
			}
			else
			{
				break;
			}		
			j--; 
		}
		strcpy(s[j+1],ch1);
	}
	printf("\nthe sorted order of strings is :\n");
	for(i=0;i<n;i++)
	{
		printf("%s\n",s[i]);
	}
	return 0;
}

