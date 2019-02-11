#include<stdio.h>
void remove123()
{
	FILE *fp,*rp;
	fopen_s(&fp, "sample.txt", "r");
	fopen_s(&rp, "sample1.txt", "w");
	char ch1='a',ch2,ch;
	int len = 0,j=0;
	while (!feof(fp))
	{
		ch1 = getc(fp);
		if (!feof(fp))
		{
			if ((ch2 = getc(fp)) == '/' && ch1 == '/')
			{
				while ((ch = getc(fp)) != '\n')
				{
					;
				}
			}
			else
			{
				fputc(ch1, rp);
				fputc(ch2, rp);
			}
		}
		
		else
		{
			fputc(ch1,rp);
		}
	}
	fputc('\0', rp);
}

