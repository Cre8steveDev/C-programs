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

    int first = 5;
    int second = 7;
    int distance = 0;

    int firstPos = 0;
    int secondPos = 0;

    int *pos_1;
    int *pos_2;

    pos_1 = NULL;
    pos_2 = NULL;

    // Loop to check position of first and second query
    for (int i = 0; i < 12; i++)
    {
        if (myNums[i] == first)
        {
            firstPos = i;
            pos_1 = &myNums[i];
        }
        if (myNums[i] == second)
        {
            secondPos = i;
            pos_2 = &myNums[i];
        }
    }

    // Distance between two elements gotten by subtracting one pointer from the other and it returns an integer
    distance = pos_1 - pos_2;

    // print the distance between both arrays
    printf("==================================\n");
    printf("The first element is at index: %d\n", firstPos);
    printf("The second second is at index: %d\n", secondPos);
    printf("==================================\n");
    printf("Both entries are: %d elements apart\n", +(distance));
    printf("==================================\n");

    return (0);
};