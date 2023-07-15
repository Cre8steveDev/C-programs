#include <stdio.h>
#include <stdlib.h>

/**
 * Using Dynamic Memory Allocation to create
 * A multi-dimensional array grid
 *
 */

// Function to allocate given grid
int **alloc_grid(int rows, int cols);

// THE MAIN FUNCTION
int main(void)
{
    int rows, cols;

    printf("\nEnter the number of rows:");
    scanf("%d", &rows);

    printf("\nEnter the number of columns:");
    scanf("%d", &cols);

    int **arr = alloc_grid(rows, cols);
    int i, j;

    int num = 1;
    // Initializing the grid
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            arr[i][j] = num++;
        }
        num = 1;
    }

    // Printing the grid

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%3d\t", arr[i][j]);
        }
        printf("\n");
    }

    // Freeing the memory allocated for the subarrays with a loop
    for (i = 0; i < rows; i++)
    {
        free(arr[i]);
    }

    // Freeing the main array holding the sub arrays
    free(arr);

    return 0;
}

// Memory Allocating Function
int **alloc_grid(int rows, int cols)
{
    int i, j;
    int **ptr = (int **)malloc(sizeof(int *) * rows);

    // Allocate defined size for the sub-arrays
    for (i = 0; i < rows; i++)
    {
        ptr[i] = (int *)malloc(sizeof(int) * cols);
    }

    return (ptr);
}
