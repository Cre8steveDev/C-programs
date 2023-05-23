/* prettier-ignore */

#include <stdio.h>

int main()
{
    // char fullName;
    // // int age;
    // double phoneNo;
    // int height;
    // int meo = 1;
    // printf("Welcome to Cr8steve Design Hub\n");
    // printf("Kindly enter your details on the prompt\n\n");

    // printf("Full Name:\t");
    // scanf("%c", &fullName);
    // // printf("\n");

    // printf("Phone No:  \t");
    // scanf("%lf", &phoneNo);
    // // printf("\n");

    // printf("Height: \t");
    // scanf("%d", &height);
    // printf("\n");

    // printf("Thank you for Filling out your information\n");
    // printf("Summary \n");
    // printf("Full Name:\t %c \n", fullName);
    // printf("Age:\t %d \n", age);
    // printf("Phone:\t %.0lf \n", phoneNo);
    // printf("Height:\t %d \n", height);

    // USE CASE OF WHILE LOOP AND IF-ELSE IF- ELSE
    int age;

    while (age < 1 || age > 120)
    {
        printf("Please Enter your age to test eligibility: ");
        scanf("%d", &age);
        printf("\n");
    }

    if (age > 120 || age < 0)
    {
        printf("Sorry, you've entered an invalid age!\n");
    }
    else if (age >= 18)
    {
        printf("You're eligible to vote!\n");
    }
    else if (age < 18)
    {
        printf("Sorry dear, you're not eligible to vote 🖤");
    }

    return 0;
}