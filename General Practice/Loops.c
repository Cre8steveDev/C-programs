#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{

    bool state = true;

    // Trying out using the while Loop to program a running game whilst condition is met

    while (state)
    {
        int num = 0;
        char choice;

        printf("Hello and welcome. Enter your number: \n");
        scanf("%i", &num);
        getchar();

        if (num >= 10)
        {
            printf("Awesome, you got the right range of numbers!");
            state = false;
            break;
        };

        printf("\nYou have entered a wrong number. Will you like to try again? Y / N: ");
        scanf("%c", &choice);

        state = (choice == 'Y') ? true : false;
    }

    return 0;
}