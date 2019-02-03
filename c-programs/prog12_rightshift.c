#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n,b;
    scanf("%d %d",&n,&b);
    int temp=n>>b;
    printf("%d",temp);
    return 0;
}
