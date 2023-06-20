#include <stdio.h>
#include <stdlib.h>

int stringlen(char *string);
int __sizeof(char *sizer);

int main()
{
    printf("%d \n", stringlen("stringLength test"));
    printf("%d \n", stringlen(""));
    printf("%d \n", stringlen("jason"));

    return 0;
}

// My own way of calc length of string

int stringlen(char *stringe)
{
    // for (; stringe[i] != '\0'; i++)
    //     len++;
    // return len;

    char *strn = stringe;
    int len = 0;

    while (*strn)
        strn++;

    return len = strn - stringe;
}