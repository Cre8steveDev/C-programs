#include <stdio.h>

int main() {
    for (int i = 0; i <= 99; i++) {
        int firstTens = i / 10;
        int firstUnits = i % 10;
        
        for (int j = i; j <= 99; j++) {
            int secondTens = j / 10;
            int secondUnits = j % 10;
            
            if (i != j) {
                putchar(firstTens + '0');
                putchar(firstUnits + '0');
                putchar(' ');
                putchar(secondTens + '0');
                putchar(secondUnits + '0');
                putchar(',');
                putchar(' ');
            }
        }
        putchar('\n');
    }
    
    return 0;
}
