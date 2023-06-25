#include "main.h"

void print_line(char *s) {
  int m;

  for (m = 0; m < 50; m++) {
    printf("%s", s);
  }
  printf("\n");
}