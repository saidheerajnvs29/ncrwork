#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int num=0,min=100000000,max=-1;
    float avg=0;
    while(1)
    {
        int n;
        scanf("%d",&n);
        if(n<=0)
        {
            break;
        }
        num++;
        if(min>n)
        {
            min=n;
        }
        if(max<n)
        {
            max=n;
        }
        avg=avg*(num-1);
        avg+=n;
        avg/=(float)num;
    }
    printf("the number of values are %d\nthe maximum value is %d\nthe minimum value is %d\nthe average of numbers is %f\n",num,max,min,avg);
    return 0;
}
