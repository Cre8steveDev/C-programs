#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>

int myPrintF(char *fmt, ...);
int myputs(char *s);
int myprntint(int num);

int main(void)
{
    int year = 1994;
    char *name = "Stephen";

    int len = myPrintF("Hello World!!! The %dth time\n", 5032);
    int len2 = myPrintF("My name is: %s. Born in the year %d\n", name, year);

    printf("My Function returns: %d\n", len);
    printf("My Second Function returns: %d\n", len2);

    return 0;
}

/**
 * myPrintF - emulating the default printf
 * @fmt: String literal or the string with the format specifiers
 * Return: the number of characters it prints
 */

int myPrintF(char *fmt, ...)
{
    int count = 0;
    char *string;
    int print_int;
    char print_char;
    char *print_str;
    float print_float;

    va_list args;
    va_start(args, fmt);

    for (string = fmt; *string != '\0'; string++)
    {

        if (*string == '%')
        {
            string++;
            if (*string == 's')
            {
                print_str = va_arg(args, char *);
                count += myputs(print_str);
            }
            else if (*string == 'd')
            {
                print_int = va_arg(args, int);
                count += myprntint(print_int);
            }
            else if (*string == 'c')
            {
                print_char = va_arg(args, char);
                putchar(*string);
                count++;
            }
            string++;
        }
        putchar(*string);
        count++;
    }

    va_end(args);
    return (count);
}

// Self_Defined Strings printer;
int myputs(char *s)
{
    int num = 0;

    while (*s != '\0')
    {
        putchar(*s);
        num++;
        s++;
    }

    return (num);
}

// Self-Defined Integer printer

int myprntint(int num)
{
    int count = 0;
    int index = 0;
    char buffer[30];

    if (num < 0)
    {
        putchar('-');
        count++;
        num *= -1;
    }
    if (num == 0)
    {
        putchar('0');
        count++;
    }

    while (num > 0)
    {
        buffer[index] = (num % 10) + '0';
        num /= 10;
        index++;
    }

    while (index > 0)
    {
        putchar(buffer[index] + '0');
        index--;
        count++;
    }

    return (count);
}
