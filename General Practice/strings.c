/*
****    Learning and Practicing strings in C
****    Omoregie Stephen
****    2nd June 2023
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// This is used to define a constant of any data type using the literals

#define MY_NAME "Stephen"
#define CURRENT_AGE 29

// Alternatively, you can also use the const keyword before the variable name to declare it as a constant. This one can be scoped locally or globally
const int birthYear = 1994;

int main()
{
    // This is one way of initializing a character string
    char myName[20] = "Omoregie Stephen\n";

    // This is another way
    char myCountry[] = {"Nigeria My Country"};
    // printf("My name is: %s", myCountry[1]);

    char myTribe[10];
    // This function does a side effects that copies "Benin" into the myTribe char array
    strncpy(myTribe, "Benin", 10);

    printf("My name is: %s", myTribe);

    printf("The number of letters in myName is: %i", strlen(myName));

    // String Concatenation

    char myString[] = " My String";
    char input[80];
    printf("\n \n");
    printf("Enter a string to be concatenated: ");
    scanf("%s", input);

    printf("\nThe string %s concatenated with %s is:::::\n", myString, input);
    // The second argument is taken to the end of the first
    printf("%s", strncat(input, myString, sizeof(input)));

    // String concatenation ends
    return (0);
}
