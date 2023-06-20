#include <stdio.h>
#include <stdbool.h>

/**
 * main - Testing the principles of a constant parameter
 *
 * Return: Always 0 (Success)
 */

// I STILL DON'T UNDERSTAND CONST POINTER PARAMETERS

// Global variable
char title[] = "Holiness";

// Function declaration
bool SendMessage(const char const *pmessage);

int main(void)
{
    char greet[] = "You are my sunshine, my only sunshine \n";
    char hail[] = "I see the moon the moon sees me \n";

    SendMessage(greet);
    SendMessage(hail);

    return (0);
}

// Function Definition
bool SendMessage(const char const *pmessage)
{
    // char message[] = *pmessage;

    pmessage = title;

    // printf("%s\n", pmessage);
    printf("%s\n", pmessage);
    printf("%c\n", *pmessage);
    putchar('\n');

    if (*pmessage)
        return true;

    return false;
}