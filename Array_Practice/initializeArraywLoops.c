#include <stdio.h>
#include <stdlib.h>

/**
 * main - Calculating the size of an array or string
 * Return: Always 0 (Success)
 * Author: Stephen Omoregie
 */

int main(void)
{
	int multiplesOf3[50];
	int multiplesOf5[50];
	int size;
	int numEl;
	int count = 0;
	int index = 0;

	for (count; count < 50; count++)
	{
		// if (sizeof(multiplesOf3) / sizeof(int) == 49 && sizeof(multiplesOf5) / sizeof(int) == 49)
		// 	break;

		// assign multiples of 3 to the array
		if (count % 3 == 0)
			multiplesOf3[index] = count;
		else
			continue;

		// assign multiples of 5 to the array
		// if (count % 5 == 0)
		// multiplesOf5[index] = count;

		index++;
	}

	// print out the values of the individual arrays
	system("clear");

	printf("Multiples of 3:\n");

	for (int i = 1; i < 49; i++)
	{
		if (multiplesOf3[i] == 0)
			break;
		printf("( %d ) ", multiplesOf3[i]);
	}

	printf("\n");

	// printf("Multiples of 5:\n");
	// for (int i = 0; i < 50; i++)
	// 	printf("( %d ) ", multiplesOf5[i]);

	return (0);
}
