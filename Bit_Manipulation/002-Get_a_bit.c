/**
 * Getting a bit in a number
 * Bit Manipulation in C
 */
#include <stdio.h>

int main(void)
{
	int num = 1178541;
	int num2 = 576;
	int test2 = 1;

	/* Checking if a bit is on or off (1 >> n) & 1 */
	int test = (num >> 5 & 1);

	printf("%d\n", test);

	/*Equally valid way is test_var = 1; test_var << n_bits and num & test_var*/
	/*This also returns the value of that bit position*/
	test2 = (test << 5) & num2;

	/*Test will be if test2 >=1*/

	printf("%d\n", test2);

	return 0;
}
