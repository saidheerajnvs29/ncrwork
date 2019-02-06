#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int salary;
    scanf("%d",&salary);
    float hra,da;
    if(salary>=1 && salary<=4000)
    {
        hra=salary*0.1;
        da=salary*0.5;
    }
    else if(salary>=4001 && salary<=8000)
    {
        hra=salary*0.2;
        da=salary*0.6;
    }
    else if(salary>=8001 && salary<=12000)
    {
        hra=salary*0.25;
        da=salary*0.7;
    }
    else if(salary>=12001)
    {
        hra=salary*0.3;
        da=salary*0.8;
    }
    float gross_salary=salary+hra+da;
    printf("%f",gross_salary);
    return 0;
}
