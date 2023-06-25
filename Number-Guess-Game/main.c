#include "main.h"

// GUESS GAME

int main(void) {

  srand(time(0));

  int randNum[15];
  int i;

  // User Input
  int choice1, choice2, choice3, choice4, choice5;

  // User Result
  int out1, out2, out3, out4, out5;

  // PreLoader
  preLoader();

  // Print Header
  print_header();

  // Initialize the elements of the array randomly
  for (i = 0; i < 15; i++) {

    randNum[i] = (rand() % (25 - 1 + 1) + 1);

    // Checking for non repeat
    if (i >= 1) {
      if (randNum[i] == randNum[i - 1])
        randNum[i] = (rand() % (25 - 1 + 1) + 1);
    }
  }

  // Receive input from users
  printf("Enter first guess and hit ENTER: ");
  scanf("%d", &choice1);

  printf("Enter second guess: ");
  scanf("%d", &choice2);

  printf("Enter third guess: ");
  scanf("%d", &choice3);

  printf("Enter fourth guess: ");
  scanf("%d", &choice4);

  printf("Enter fifth guess and press ENTER: ");
  scanf("%d", &choice5);

  sleep(2);

  // confirm numbers in the randNum variable
  out1 = checkAnswer(randNum, choice1);
  out2 = checkAnswer(randNum, choice2);
  out3 = checkAnswer(randNum, choice3);
  out4 = checkAnswer(randNum, choice4);
  out5 = checkAnswer(randNum, choice5);

  print_line("_");
  system("clear");
  sleep(1);
  printf("YOUR GUESSES ARE AS FOLLOWS: \n");
  print_line("_");

  printf("First Guess:\t\t %d\n", choice1);
  printf("Second Guess:\t\t %d\n", choice2);
  printf("Third Guess:\t\t %d\n", choice3);
  printf("Fourth Guess:\t\t %d\n", choice4);
  printf("Fifth Guess:\t\t %d\n", choice5);

  print_line("_");

  // print Lucky numbers
  int z;
  printf("THE LUCKY NUMBERS FOR THE JACKPOT ARE:\n");

  for (z = 0; z < 15; z++) {
    if (z == 5 || z == 10)
      printf("\n");
    printf("%d\t\t", randNum[z]);
  }
  printf("\n");
  print_line("$");

  return 0;
}