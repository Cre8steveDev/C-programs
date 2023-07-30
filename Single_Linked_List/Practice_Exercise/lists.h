#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * List_struct - Schema for the list for students
 * @mat_num: Matriculation number of student
 * @full_name: Full name of student
 * @next_item: Pointer to the next item on the list
 */

typedef struct List_struct
{
    int mat_num;
    char *full_name;
    struct List_struct *next_item;
} Node;

Node *add_beginning(Node **list, int mat_num, char *full_name);
void print_list(Node *list);

#endif
