#include <stdio.h>
#include <stdlib.h>

// Arrays

int main()
{
    // int oddNums[15] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21};
    // printf("%d\n", oddNums[2]);
    // printf("Now reassigning value at index 2\n");

    // oddNums[2] = 55;
    // printf("%d\n", oddNums[2]);

    // printf("Looping through all the items in the array\n");

    // int x = 0;

    // while (x < 10)
    // {
    //     printf("%d\n", oddNums[x]);
    //     x++;
    // }

    char months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    printf("These are the Months of the year:\n");

    for (int i = 0; i < 12; i++)
    {
        printf("%d: %s and it has %d days\n", i + 1, months[i]);
    }

    // You can initialize an array with a loop. It's always advisable to initiatilze an array when it's declared.

    // Multidimensional Arrays - 2 Dimensional Arrays (Has most use case)

    // String arrays

    return 0;
}