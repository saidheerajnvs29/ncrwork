
#include<stdio.h>
extern void count()
{
	FILE *fp;
	int characters = 0, spaces = 0, special_char = 0, digits = 0, newlines = 0;
	fopen_s(&fp, "sample.txt", "r");
	char ch;
	while (!feof(fp))
	{
		ch = getc(fp);
		if ((ch >= 'a'&&ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
		{
			characters++;
		}
		else if (ch == ' ')
		{
			spaces++;
		}
		else if (ch >= '0' && ch <= '9')
		{
			digits++;
		}
		else if (ch == '\n')
		{
			newlines++;
		}
		else
		{
			special_char++;
		}

	}
	printf("the number of characters are %d\n",characters);
	//cout << "the number of digits are " << digits << "\n";
	printf("the number of digits are %d\n",digits);
	printf("the number of spaces are %d\n", spaces);
	printf("the number of new lines are %d\n", newlines+1);
	printf("the number of special characters are %d\n", (special_char-1));


}