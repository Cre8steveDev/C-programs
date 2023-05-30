#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main (void) {
	
	srand(time(0));
	
	int answer = rand() % 6 +1;

	printf("Hello world again:\nThe Guessed number is %d\n", answer);

	return 0;
}

