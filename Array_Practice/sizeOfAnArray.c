#include <stdio.h>

/**
 * main - Calculating the size of an array or string
 * Return: Always 0 (Success)
 * Author: Stephen Omoregie
 */

int main(void)
{
	int myArr[] = {12, 15, 32, 55, 71, 21, 34, 55, 92, 30};
	int size;
	int numEl;

	size = sizeof(myArr);
	numEl = (size / sizeof(int));

	printf("The variabe myArry is an array of size %d (bytes)\n", size);
	printf("Thus, there are %d element(s) in the array.)\n", numEl);

	return (0);
}
