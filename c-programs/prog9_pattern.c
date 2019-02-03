#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>=1;j--)
        {
            if(j>i)
            {
                printf(" ");
            }
            else
            {
                printf("%d",j);
            }
        }
        for(int j=2;j<=n;j++)
        {
            if(j>i)
            {
                printf(" ");
            }
            else
            {
                printf("%d",j);
            }
        }
        printf("\n");
    }
    return 0;
}
