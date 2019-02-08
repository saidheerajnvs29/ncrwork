#include<stdio.h>
#include<math.h>
#include<ctype.h>
int main()
{
	int i,j,count=0;
	char *s[5]={"we will teach you how to","move a mountain","level a building","erase a past","make a million"};
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<strlen(s[i]);j++)
		{
			if(s[i][j]=='e')
			{
				count++;	
			}
			
		}	 	 
	}
	printf("%d",count);
	return 0;
}

