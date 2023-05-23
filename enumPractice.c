/*
* Author: Omoregie Stephen (Cre8steve).
* Description: A simple use case of the enum data type for declaring custom types that can only hold one value in a set of predefined values in the enum type.

* Date Created: 23rd May 2023.
* Date Last Modified: 23rd May 2023.

*/

#include <stdio.h>

int main()
{
    enum companies
    {
        GOOGLE,
        FACEBOOK,
        XEROX,
        YAHOO,
        EBAY,
        MICROSOFT
    };

    enum companies coy1 = XEROX;
    enum companies coy2 = GOOGLE;
    enum companies coy3 = EBAY;

    // When printed, it assigns an integer to the enum variable based on the position in the enum list. It's zero based. You can now use the number to compare and test a variable.

    printf("Company 1: %i\n", coy1);
    printf("Company 2: %i\n", coy2);
    printf("Company 3: %i\n", coy3);
    return 0;
}
