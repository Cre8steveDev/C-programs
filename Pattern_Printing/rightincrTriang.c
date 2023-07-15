#include <stdio.h>
#include "main.h"
/**
 * rightIncreaseTriangle - Prints an increasing triangle pattern
 * @n: n number of rows
 * Return: Always 0 (Success)
 */

void rightIncreaseTriangle(int n)
{
    int rows = n;
    int i, j;

    // Print first outer n row
    for (i = 1; i <= rows; i++)
    {
        // Prints the symbol with a space
        // The length begins at the value of i after each iteration
        // and is compared to the number of rows to be printed n

        for (j = i; j <= rows; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        // printf("*");
        putchar('\n');
    }
}
