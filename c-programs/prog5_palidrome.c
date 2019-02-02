#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n;
    scanf("%d",&n);
    int size=0;
    int temp=n;
    int rev=0;
    while(temp!=0)
    {
        rev=rev*10;
        rev+=temp%10;
        temp/=10;
    }
    if(n==rev)
    {
        printf("%d is a palidrome\n",n);
    }
    else 
    {
        printf("%d is not a palidrome",n);
    }
    return 0;
}
