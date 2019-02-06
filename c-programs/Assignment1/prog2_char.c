#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() 
{
    char ch[100];
    scanf("%[^\n]s",ch);
    int charac=0,digit=0,blank=0,tab=0;
    for(int i=0;i<strlen(ch);i++)
    {
        if((ch[i]>=65 && ch[i]<=91)||(ch[i]>=97 && ch[i]<=122))
        {
            charac++;       
        }
        else if(ch[i]>=48 && ch[i]<=57)
        {
            digit++;
        }
        else if(ch[i]==' ')
        {
            blank++;
        }
        else{
            tab++;
        }
    }
    printf("characters = %d\ndigits = %d\nblank spaces = %d\ntab spaces = %d\n",charac,digit,blank,tab);
        
    return 0;
}