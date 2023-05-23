/*
* Author: Omoregie Stephen (Cre8steve).
* Description: A Simple C Program for calculating the Perimeter and Area of a Rectangle.

* Date Created: 23rd May 2023.
* Date Last Modified: 23rd May 2023.

*/

#include <stdio.h>

int main()
{
    double width = 0.0;
    double height = 0.0;

    printf("Please enter the width of the rectangle: ");
    scanf("%lf", &width);

    printf("Please enter the height of the rectangle: ");
    scanf("%lf", &height);
    printf("\n");

    // Print out the perimeter of the rectangle
    printf("The perimeter of the rectangle is: %.2lf\n", (height + width) * 2.0);

    // Print out the area of the rectangle
    printf("The area of the rectangle is: %.2lf\n", (height * width));
    return 0;
}
