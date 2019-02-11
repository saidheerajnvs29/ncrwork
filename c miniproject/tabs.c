
#include<stdio.h>
void tabs()
{
	FILE *fp, *wp;
	fopen_s(&fp, "sample.txt", "r");
	fopen_s(&wp, "sample1.txt", "w");
	char ch;
	while (!feof(fp))
	{
		ch = getc(fp);
		if (ch == '\t')
		{
			fputc('\\', wp);
			fputc('\\t', wp);
		}
		else
		{
			fputc(ch, wp);
		}
	}
}