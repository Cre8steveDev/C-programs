#include "lists.h"

/**
 * print_list - Prints all members of a list
 * @list: List passed as an argument
 * Return: Void
 */

void print_list(Node *list)
{
	int index = 1;

	if (list == NULL)
	{
		printf("Empty List!\n");
		return;
	}

	while (list)
	{
		printf("The student at No. %d is:\n ", index);
		printf("%s\t%d\n", list->full_name, list->mat_num);
		printf("==========================================\n\n");

		index++;
		list = list->next_item;
	}
}
