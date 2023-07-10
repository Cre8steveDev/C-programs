#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Prints concatenated strings
 * Return: Always 0
 */

char *string_concat(char *s1, char *s2);

/*The main function here*/
int main(void)
{
	char *first_name = "Stephen";
	char *last_name = "Omoregie";

	char *full_name = string_concat(first_name, last_name);

	printf("First Name: %s\n", first_name);
	printf("Last Name: %s\n", last_name);
	printf("\n");
	printf("Full Name: %s\n", full_name);

	//
	return (0);
}

char *string_concat(char *s1, char *s2)
{
	int size_both = (strlen(s1) + strlen(s2) + 2);
	char *fullname = (char *)malloc(size_both * sizeof(char));

	if (!fullname)
		return 0;

	int i = 0;

	// append first string
	while (*(s1 + i) != '\0')
	{
		*(fullname + i) = *(s1 + i);
		i++;
	}
	*(fullname + i) = ' ';
	i++;

	// append second string
	int j = 0;
	while (*(s2 + j) != '\0')
	{
		*(fullname + (i + j)) = *(s2 + j);
		j++;
	}
	*(fullname + (i + j)) = '\0';

	return (fullname);
}