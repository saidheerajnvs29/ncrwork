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
    while(temp!=0)
    {
        temp/=10;
        size++;
    }
    temp=n;
    int sum=0;
    while(temp!=0)
    {
        int r=temp%10;
        sum+=pow(r,size);
        temp/=10;
    }
    if(sum==n)
    {
        printf("%d is an amstrong number\n",n);
    }
    else
    {
        printf("%d is not an amstrong number\n",n);
    }
    return 0;
}
