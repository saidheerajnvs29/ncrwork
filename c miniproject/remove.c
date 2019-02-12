#include<stdio.h>
void remove123()
{
	FILE *fp,*rp;
	fopen_s(&fp, "sample.txt", "r");
	fopen_s(&rp, "sample1.txt", "w");
	char ch1,ch2,ch;
	int len = 0,j=0;
	while (!feof(fp))
	{
		ch1 = getc(fp);
		if (ch1 == '/')
		{
			ch2 = getc(fp);
			printf("%c\n", ch2);
			if (ch2 != '*' && ch2 != '/')
			{
				fputc(ch1, rp);
				fputc(ch2, rp);
			}
			else if (ch2 == '/')
			{
				printf("%c\n", ch2);
				while ((ch = getc(fp)) != '\n')
				{
					printf("%c\n", ch);
				}
			}
			else if (ch2 == '*')
			{
				while (1)
				{
					ch1 = ch2;
					ch2 = getc(fp);
					if (ch1 == '*'&&ch2 == '/')
						break;
				}
			}
		}
		else
		{
			fputc(ch1, rp);
		}
	}
	fputc('\0', rp);
}

