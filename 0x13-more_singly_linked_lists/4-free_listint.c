#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
**add_node_end - adds a new node to thelist
*@head: list name
*@str: string to add
*Return: On success 1.
*/

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
