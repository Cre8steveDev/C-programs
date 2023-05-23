#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    char myStack[][30] = {
        "HTML",
        "CSS | TailwindCss | SASS",
        "Javascript | ReactJS",
        "C",
    };

    for (int i = 0; i < 4; i++)
    {
        printf("%s\n", myStack[i]);
    };

    return 0;
}