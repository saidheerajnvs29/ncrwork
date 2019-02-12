#include<stdio.h>
struct find
{
	char country[20];
	char city[20];
};
int main()
{
	FILE *fp;
	fopen_s(&fp, "sample.txt", "w+");
	struct find f[20];
	int n, i;
	printf("enter the number of countries\n");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%s %s", &f[i].country, &f[i].city);
	}
	fwrite()
	return 0;
}