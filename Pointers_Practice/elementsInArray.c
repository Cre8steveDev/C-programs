/**
 * main - Print the element in an array
 *
 * Description - A function that prints out the various elements in an array using pointers
 * Return (0) - Successful
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // sizeof(myNums) / sizeof(int) getting the integer size
    // of elements being held by an array
    int myNums[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int *ptrNums;
    ptrNums = myNums;

    int i = 0;

    while (i < 12)
    {
        printf("Values in myNums array are: %d\n", *ptrNums + i);
        i++;
    }

    return (0);
};