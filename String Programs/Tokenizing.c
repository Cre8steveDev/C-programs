#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function Prototypes

// Main Function
int main(void)
{
    char str[80];
    const char tok[2] = "-";
    char *token;

    printf("Enter your string here: ");
    scanf("%s", str);

    token = strtok(str, tok);

    // Token doesn't have to be dereferenced to get the value
    // printf("This is the value of the token: %s", token);

    // Loop through the other tokens

    while (token != NULL)
    {
        printf("%s\n", token);

        token = strtok(NULL, tok); // This is the subsequent Call that's why it's in a loop so that it calls the token for till the end?
    }

    /*A sequence of calls of strtok (str, tok) splits str into tokens, each delimited by a character from tok. The first call in a sequence has a non-NULL s. It finds the first token in str consisting of characters not in tok; it terminates that by overwriting the next character of s with •\0 • and returns a pointer to the token. Each subsequent call, indicated by a NULL value of str, returns the next such token, searching from just past the end of the previous one. strtok returns NULL when no further token is found. The string tok may be different on each call.

    */
    return 0;
}

// Function Definition