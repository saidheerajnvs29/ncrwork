#include<stdio.h>
int main()
{
	float table[2][3]={{1.1,1.2,1.3},{2.1,2.2,2.3}};
	printf("\ntable = %d",table);
	printf("\n(table+1) = %d",(table+1));
	printf("\n*(table+1) = %d",*(table+1));
	printf("\n*(table+1)+1 = %d",*(table+1)+1);
	printf("\n(*(table)+1) = %d",(*(table)+1));
	printf("\n*(*(table+1)+1) = %f",*(*(table+1)+1));
	printf("\n*(*(table)+1) = %f",*(*(table)+1));
	printf("\n*(*(table+1) = %f",*(*(table+1)));
	printf("\n*(*(table) + 1)+1 = %f",*(*(table) + 1)+1);
	
	return 0;
}

