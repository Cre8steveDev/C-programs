#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int myPrintF(char *fmt, ...);
int myputs(char *s);
int myprntint(int num);
int myputchar(char c);
int myprnthex(int num);

int main(void)
{
    int year = 1995554;
    char *name = "Stephen";

    int len = myPrintF("Hello World!!! The %dth %c time\n", 503787872, 'D');
    int len2 = myPrintF("My name is: %7s. Born in the year %d\n", name, year);

    myPrintF("Print 5 spaces:%5d\n", 500);

    printf("My Function returns: %d\n", len);
    printf("My Second Function returns: %d\n", len2);

    return 0;
}

/**
 * myPrintF - emulating the default printf
 * @fmt: String literal or the string with the format specifiers
 * Return: the number of characters it prints
 */

int myPrintF(char *fmtstr, ...)
{
    int count = 0;
    char *string;
    int print_int;
    char print_char;
    char *print_str;
    float print_float;

    va_list args;
    va_start(args, fmtstr);

    for (string = fmtstr; *string != '\0'; string++)
    {

        if (*string == '%')
        {
            string++;
        loop:
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
                print_char = va_arg(args, int);
                myputchar(print_char);
                count++;
            }
            // Implementing Character width
            else if (atoi(string))
            {
                // Create a function that can return how many
                // characters a number has
                int x = atoi(string);
                while (x > 0)
                {
                    myputchar(' ');
                    x--;
                }
                string++;
                goto loop;
            }
            string++;
        }
        myputchar(*string);
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
        write(1, s, 1);
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
        myputchar('-');
        count++;
        num = -num;
    }
    if (num == 0)
    {
        myputchar('0');
        count++;
    }

    while (num > 0)
    {
        buffer[index] = (num % 10) + '0';
        num /= 10;
        index++;
    }

    while (index >= 0)
    {
        myputchar(buffer[index]);
        index--;
        count++;
    }

    return (count);
}

// Implementing Self-Defined Putchar

int myputchar(char c)
{
    return (write(1, &c, 1));
}

int myprnthex(int num);