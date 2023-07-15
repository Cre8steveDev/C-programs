#include <stdio.h>
#include "main.h"
/**
 * main - Prints an increasing triangle pattern
 * @n: n number of rows
 * Return: Always 0 (Success)
 */

void increaseTriang(int n)
{
    int rows = n;
    int i, j;

    // Print first outer n row
    for (i = 1; i <= rows; i++)
    {
        // Prints the symbol with a space
        // The length increases as the outer loop
        // increases. This gives the increasing triangle

        for (j = 1; j <= i; j++)
        {
            printf("# ");
        }
        putchar('\n');
    }
}
