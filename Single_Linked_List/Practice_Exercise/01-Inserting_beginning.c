#include "lists.h"
/**
 * Description:
 * Creating a Linked List and a function that adds
 * new nodes to the beginning of the list
 *
 * Author: Stephen Omoregie (Cre8steve Dev)
 * Date Created: 28th July 2023
 * Date Modified: 28th July 2023
 * */

int main(void)
{
	Node *head = malloc(sizeof(Node));
	head = NULL;

	add_beginning(&head, 201068093, "Omoregie Stephen");
	add_beginning(&head, 208093556, "Okogun Tracy");
	add_beginning(&head, 201898867, "Oluwaseun Temitope");
	add_beginning(&head, 211230988, "Amiesi Jonathan B");

	print_list(head);

	return (0);
}

/**
 * Adding item to the beginning of the list
 * @list: Pointer to the original list to modify
 * @mat_num: Matric number of new student
 * @full_name: Full name of new student
 * Return: pointer to the Node or NULL if it fails
 */

Node *add_beginning(Node **list, int mat_num, char *full_name)
{
	Node *new_node = malloc(sizeof(Node));

	if (!new_node)
		return (NULL);

	new_node->mat_num = mat_num;
	new_node->full_name = strdup(full_name);
	new_node->next_item = NULL;

	if (*list == NULL)
		*list = new_node;
	else
	{
		// Point new_node to current list head and head to new node: swap ish
		new_node->next_item = *list;
		*list = new_node;
	}

	return (new_node);
}
