/*
****    Learning and Practicing Basic case of Pointers in C
****    Omoregie Stephen
****    2nd June 2023
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year = 1994;

    // At declaration/Initialization a pointer declared as below, receivers an address.
    int *ptr_year = &year;

    printf("The current value of year is: %p\n", &year);

    // * is used to dereference a pointer, i.e getting the value it's pointing to
    printf("The current value of ptr_year is: %i\n", *ptr_year);

    return 0;
}