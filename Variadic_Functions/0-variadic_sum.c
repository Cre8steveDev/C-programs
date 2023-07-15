#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>

/**
 * Main Function
 *
 * Returns (0)
 */

int sumNums(int len, ...);

int main(void)
{
    int test1 = sumNums(6, 5, 4, 6, 7, 8, 9);
    int test2 = sumNums(2, 15, 40);
    int test3 = sumNums(4, 55, 4047, 800, 95);
    int test4 = sumNums(7, 15, 24, 65, 70, 8, 9, 12);
    int test5 = sumNums(8, 2, 4, 6, 8, 10, 12, 14, 16);

    printf("\t%d\n", test1);
    printf("\t%d\n", test2);
    printf("\t%d\n", test3);
    printf("\t%d\n", test4);
    printf("\t%d\n", test5);

    return (0);
}

/**
 * sumNums - Calculates the sum of multiple arguments
 * @len: The number of elements being passed
 * @...: Variable length arguments
 * Return: total
 */

int sumNums(int len, ...)
{
    int total = 0, i;

    // Implemented as a pointer to the current argument
    va_list args;

    // Initialize the va_list with the variadic arguments.
    // It takes two arguments, the va_list variable and the
    //  last named parameter before the variadic arguments.
    //  It prepares the va_list to start iterating
    //  through the variable arguments

    va_start(args, len);

    // The va_arg macro retrieves the next argument from the
    // va_list. It takes two arguments, the va_list variable and
    // the type of argument to retrieve. It returns the value of the
    // next argument of the specific data type and advances the va_list
    // to the next argument. Such that the next time it is called, it is
    // pointing to the next argument.

    for (i = 0; i < len; i++)
    {
        total += va_arg(args, int);
    }

    // int arg = va_arg(args, int);
    // while (arg != sentinel) {
    //     result += arg;
    //     arg = va_arg(args, int);
    // }
    return (total);
}
