/**
 * Trying hands on Bit Manipulation
 *
 * Author: Omoregie Stephen
 * Date Created: 30th July 2023
 */
#include <stdio.h>

int main(void)
{
    /* code */

    int num1 = 4;
    int num2 = 0;

    //  The | OR finds at least one of the bits that's set
    //  The & AND finds both bits being set
    //  The ^ XOR finds where both bits are not the same
    //  i.e Not  both set or unset.

    printf("43 | 7: %d\n", (43 | 7));
    printf("43 & 7: %d\n", (43 & 7));
    printf("43 ^ 7: %d\n", (43 ^ 7));
    printf("~(43 & 7): %d\n", ~(43 & 7));

    num1 = num1 << 2; // left op * 2 raise to power right op
    // num1 = num1 >> 2; // left op / 2 raise to power right op

    num1 = 43;

    //  Finding the number of set bits

    printf("After Left Shift: %d\n", num1);

    return 0;
}
