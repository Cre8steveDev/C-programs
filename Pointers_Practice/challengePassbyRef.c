/**
 * main - A program that prints the square of a number
 *
 * squarebyref - A function that simulates call by reference
 * to change the value of a variable by its address. Squaring
 * squaring it by itself.
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>

// Function prototype
void squarebyref(int *num);

// Entry Point

int main()
{
    /* code */
    int num01 = 3;
    int num02 = 5;

    printf("Before function call: value of num01: %d and num02: %d\n", num01, num02);

    printf("===============\nFunction called here\n=================\n");
    squarebyref(&num01);
    squarebyref(&num02);

    printf("After function call: value of num01: %d and num02: %d\n", num01, num02);

    return (0);
}

// Function Definition
void squarebyref(int *num)
{
    *num *= *num;
}