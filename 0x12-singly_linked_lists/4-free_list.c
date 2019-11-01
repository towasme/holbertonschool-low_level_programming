#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
**add_node - adds a new node to thelist
*@head: list name
*@str: string to add
*Return: On success 1.
*/

void free_list(list_t *head)
{

	while (head != NULL)
	{
		free(head->str);
		free(head);
	}
}
