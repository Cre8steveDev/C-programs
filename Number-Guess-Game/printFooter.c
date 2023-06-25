#include "main.h"

void print_footer(void) {

  // paint header interface
  int m, n, o;
  for (m = 0; m <= 3; m++) {
    for (n = 0; n < 50; n++) {
      if (m == 2) {
        printf("#");
        if (n == 24)
          printf("\n");
      }
      printf("=");
    }

    if (m == 3) {
      printf("\n");
      printf("WELCOME TO THE LUCKY 5 GUESSING GAME!");
    }
    printf("\n");
  }
  for (m = 0; m < 1; m++) {
    for (n = 0; n < 50; n++) {
      printf("=");
    }
  }
  printf("\n");
}