#include <stdio.h>

// Others on note
int main(void)
{

    enum gender
    {
        female,
        male
    };
    enum westAfricanCountry
    {
        Ghana,
        Nigeria,
        Niger,
        Cameroun,
        Chad,
    };

    enum examGrade
    {
        A,
        B,
        C,
        D,
        E,
        F
    };

    enum examGrade studentGrade = B;
    enum gender studentGender = male;
    enum westAfricanCountry nationality = Chad;

    printf("The student is a %d from %d and had a score grade of %d", studentGender, nationality, studentGrade);
}

// Practicing Char and others below
