#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

// Function Prototypes

// Main Function
int main(void)
{
    // Searching for a character within a string of text.
    char word[] = "Hospitalization";
    char ch = 'i';
    char *pFound = NULL;
    int count = 0;

    // The function returns a pointer of NULL if absent, or an address/value if present
    pFound = strchr(word, ch);

    if (pFound != NULL)
    {
        for (int i = 0; i < sizeof(word); i++)
        {
            if (word[i] == ch)
                ++count;
        }
        printf("The character is present %d times in the word", count);
    }
    else
        printf("The character is not present");

    return 0;
};
