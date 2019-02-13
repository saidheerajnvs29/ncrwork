#include<stdio.h>
struct user1
{
	int n;
	char ch;
};
union user2
{
	int n;
	char ch;
};  
int main()
{
	printf("%d\n",sizeof(struct user1));
	printf("%d\n",sizeof(union user2));
	return 0;
}

