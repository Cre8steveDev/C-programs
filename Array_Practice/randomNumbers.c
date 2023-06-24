#include <stdio.h>
#include <time.h>

/**
 * main - Syntax for calculating a random number
 * 1. Code 1 - deals for number between a range
 * 2. Code 2 - deals with a single random number;
 */

int main()
{
	srand(time(0));

	// The Logis thus. You take the modulus of the random value by the
	// highest range you want. Then add one to get the range specified
	//  e.g (rand % 5 will only give 4 max. but adding 1 will give 5);
	// For the range, moduls it with the difference of highest minus
	// lowest, add one, then add the lowest, outside the brackets.

	// Code 1: Rand number between two ranges
	int lowest = 1;
	int highest = 15;

	// int randnumber = (rand() % (highest - lowest + 1)) + lowest;

	int randnumber = (rand() % 5) + 1;

	printf("First random number is: %d", randnumber);

	return 0;
}
