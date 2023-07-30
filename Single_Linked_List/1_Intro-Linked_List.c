#include <stdio.h>
#include <stdlib.h>

/**
 * Beginning LinkedList in C
 *
 */

// Define the node structure
typedef struct node
{
    int value;
    struct node *link;
} Node;

int main(void)
{
    // Initiatilze the first item which has to be pointer itself
    Node *head = malloc(sizeof(Node));

    // Create second instance of the node
    Node *current = malloc(sizeof(Node));

    head->value = 57;
    head->link = NULL;

    current->value = 120;
    current->link = NULL;
    head->link = current;

    // Another instance using previous variable
    current = malloc(sizeof(Node));
    current->value = 77;
    current->link = NULL;

    // Trying to traverse

    printf("%d\n", head->value);
    printf("%d\n", current->value);

    printf("%p\n", (void *)head->link);

    free(current);
    free(head->link);
    free(head);
    return (0);
}
