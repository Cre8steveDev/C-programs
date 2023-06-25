#include "main.h";

int checkAnswer(int lists[], int g) {
  int i;

  for (i = 0; i < 15; i++) {
    if (g == lists[i])
      return (1);
  }

  return (0);
}