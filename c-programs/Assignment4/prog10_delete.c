#include <stdio.h>
#include <string.h>

void delete(char *s, int ch)
{
    char *ptr;

    while (ptr = strchr(s, ch))
        strcpy(ptr, ptr + 1);
}

int main()
{
    char str[100];
    int ch;

    printf("enter a string\n");
    gets(str);
    printf("enter the character to delete\n");
    ch = getchar();

    delete(str, ch);

    printf("%s",str);

    return 0;

}

