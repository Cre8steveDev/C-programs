#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/**
 * main - Learning about structs
 * Return: Always (0) on success
 */

typedef struct Students
{
	int age;
	char name[15];
	char hobby[25];
	char stack[25];
	bool registered;
} Students;

int main(void)
{
	int count = 0;
	// Struct of students
	Students user1 = {25, "Stephen", "Coding and Reading", "Full Stack", true};
	Students user2 = {35, "Osatohanmwen", "Traveling and Tours", "Front End Stack", false};
	Students user3 = {22, "Johanna", "Writing and Adventure", "Back-end Developer", true};

	// Array of structs

	Students allStudents[3] = {user1, user2, user3};
	printf("Size of Students struct: %ld\n\n", sizeof(allStudents) / sizeof(allStudents[0]));
	printf("Size of bool: %ld\n", sizeof(bool));

	// Loop through and print members in the allStudents:

	for (count = 0; count < 3; count++)
	{
		!allStudents[count].registered ? (
											 printf("Name: %s\n", allStudents[count].name),
											 printf("Age: %d\n", allStudents[count].age),
											 printf("Hobby: %s\n", allStudents[count].hobby),
											 printf("Stack: %s\n", allStudents[count].stack)),
			printf("\n")
									   : 5;
	}

	return (0);
}

// printf("Name:%s\t Stack: %s\n", user1.name, user1.stack);
// printf("Hobby:%s\nAge: %d\n", user1.hobby, user1.age);
// user1.registered ? printf("The student is registered\n") : printf("Student not registered\n");