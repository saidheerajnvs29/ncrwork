// prog10_find.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <stdio.h>
struct find
{
	char country[20];
	char city[20];
};
int main()
{
	FILE *fp;
	struct find f[20], f1;
	char cit[20];
	int n, i, t,flag=0;
	fopen_s(&fp, "sample.txt", "w+");
	printf("enter the number of countries\n");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%s %s", &f[i].country, &f[i].city);
		fwrite(&f[i], sizeof(struct find), 1, fp);
	}
	
	while (1)
	{
		fseek(fp, 0, SEEK_SET);
		printf("enter the menu\n1 for taking city and printing country\n2 for taking country and printing capital\n3 for exit\n");
		scanf("%d", &t);
		if (t == 1)
		{
			printf("enter the city\n");
			scanf("%s", cit);
			while (fread(&f1, sizeof(struct find), 1, fp))
			{
				//	printf("%s %s\n", f1.country, f1.city);
				if (strcmp(f1.city, cit) == 0)
				{
					printf("the country is %s\n", f1.country);
					flag = 1;
				}
			}
			if (flag == 0)
			{
				printf("not found\n");
			}
		}
		else if (t == 2)
		{
			printf("enter the country\n");
			scanf("%s", cit);
			while (fread(&f1, sizeof(struct find), 1, fp))
			{
				//	printf("%s %s\n", f1.country, f1.city);
				if (strcmp(f1.country, cit) == 0)
				{
					printf("the captial is %s\n", f1.city);
					flag = 1;
				}
			}
			if (flag == 0)
			{
				printf("not found\n");
			}
		}
		else
		{
			printf("exiting the program....\n");
			break;
		}
	}
	system("pause");
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
