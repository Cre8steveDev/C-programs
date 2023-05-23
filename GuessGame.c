
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int gameState = 0;

    do
    {
        int random1 = rand() % 25 + 1;
        srand(time(NULL));
        int guess;
        int counter;
        char contGame;

        // Ask for input
        printf("This is Guessah 2.0\nCan you guess the number in the pot? ");
        printf("Enter your number: ");

        // Check if input is an integer
        if (scanf("%d", &guess) != 1)
        {
            printf("Sorry, you've entered an invalid value\n\n");
            printf("Will you like to play again? Y / N: ");
            scanf(" %c", &contGame);
            if (contGame == 'Y')
            {
                continue;
            }
            else
            {
                break;
            }
        }

        // Compare input with rand num
        if (guess == random1)
        {
            printf("Yaay! You've guessed correctly\n");
            printf("Will you like to play again? Y / N: ");
            scanf(" %c", &contGame); // add a space before %c to consume any leftover newline character

            if (contGame == 'Y')
            {
                continue;
            }
            else
            {
                break;
            }
        }
        else if (guess < random1)
        {
            printf("The number you guessed is too low!\n");
            continue;
        }
        else if (guess > random1)
        {
            printf("The number you guessed is too high!\n");
            continue;
        }
        // else
        // {
        //     break;
        // }

        // Express logic of whether true, or lower or higher

        // If guessed more than 5 times, say sorry. Too many guesses

        // If guess is correct, ask if user wants to play again, if yes, then CONTINUE, else BREAK

    } while (gameState == 0);

    return 0;
}
