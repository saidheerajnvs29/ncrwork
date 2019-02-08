#include<stdio.h>
#include<math.h>
#include<ctype.h>
int replace(char *s)
{
	int count=0,i;
	for(i=0;i<strlen(s);i++)
	{
		if(*(s+i)==' ')
		{
			*(s+i)='-';
			count++;	
		}	 	 
	}
	printf("%s\n",s);
	return count;
}
int main()
{
	int i,j,count=0;
	char *s=(char *)malloc(12*sizeof(char));
	strcpy(s,"The cat sat");
	count=replace(s);
	printf("%d",count);
	free(s);
	return 0;
}

