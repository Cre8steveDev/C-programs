#include "main.h"

char *desc =
    "You have the choice of picking 5 numbers from\n1 to 45. If you get "
    "all correctly, you win the \nJACKPOT PRICE OF $40,000\n";

void print_header(void) {

  // paint header interface
  int m, n, o;
  for (m = 1; m < 3; m++) {
    for (n = 0; n < 49; n++) {
      if (m == 2) {
        printf("#");
        if (n == 24)
          printf("\n");
      }
      printf("=");
    }
    printf("\n");
  }

  printf("\t\tWELCOME TO THE LUCKY 5 GUESSING GAME!");
  printf("\n");

  print_line("_");

  print_description(desc);
  print_line("_");
}
