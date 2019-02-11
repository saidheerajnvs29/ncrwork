#include<stdio.h>
void match()
{
	FILE *fp,*wp;
	char ch, s[20],t[20];
	int i;
	printf("enter the string to be matched\n");
	scanf("%s", t);
	fopen_s(&fp, "sample.txt", "r");
	fopen_s(&wp, "sample1.txt", "w");
	
	while (!feof(fp))
	{
		fscanf(fp, "%s", s);
		if (strcmp(s, t) == 0)
		{
			for (i = 0; t[i+1] != '\0'; i++)
			{
				s[i] = t[i + 1];
			}
			s[i] = t[0];
			fprintf(wp, "%s ", s);
		}
		else
		{
			fprintf(wp, "%s ", s);
		}
		
	}
}