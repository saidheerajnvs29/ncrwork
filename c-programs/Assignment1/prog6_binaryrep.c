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
    int arr[5];
    for(int i=0;i<5;i++)
    {
        arr[i]=0;
    }
    int i=4;
    while(temp!=0)
    {
        int f=temp%2;
        arr[i]=f;
        i--;
        temp/=2;
    }
    for(int i=0;i<5;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}
