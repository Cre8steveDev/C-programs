#include <stdio.h>
#include <string.h>

// Function Prototypes

// Main Function
int main(void)
{
    char word[20];

    // Converting first character to UpperCase.
    printf("Enter name in lowercase: ");
    scanf("%s", word);
    getchar();
    printf("\n");

    // Convert first letter in the string
    word[0] = (char)toupper(word[0]);

    // Print converted word
    printf("Converted to: %s", word);

    return 0;
}