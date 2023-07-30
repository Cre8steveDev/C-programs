#include <stdio.h>
#include <stdlib.h>

/**
 * Node - Structure for the linked List
 * @str: String to hold name
 * @year: Holder's year of entry
 * @next: Pointer to next item on the list
 */
typedef struct Node
{
    char *str;
    int year;
    struct Node *next;
} Node;

void print_list(Node *head);

/**
 * main - Driver code
 * Return: Always (0) on cusccess
 */
int main(void)
{

    /*Create head of list*/
    Node *head = malloc(sizeof(Node));
    Node *nextitem = malloc(sizeof(Node));

    head->str = "Omoregie Stephen";
    head->year = 1980;
    head->next = NULL;

    nextitem->str = "Okogun Tracy";
    nextitem->year = 1967;
    nextitem->next = NULL;
    head->next = nextitem;

    nextitem->str = "Omoregie Blessing";
    nextitem->year = 1990;
    nextitem->next = NULL;
    nextitem->next = nextitem;

    print_list(head);
    printf("\n%s\n", head->str);

    return (0);
}

/**
 * print_head - Prints the details in the list
 * @head: Passed in list
 * Return: Void
 */

void print_list(Node *head)
{
    /*code goes here*/
    if (!head)
    {
        printf("Invalid list\n");
        return;
    }
    /*Create a copy of the list */
    Node *pointer;
    pointer = head;

    while (pointer)
    {
        printf("%-20s\t", pointer->str);
        printf("%d\n", pointer->year);

        pointer = pointer->next;
    }
}
