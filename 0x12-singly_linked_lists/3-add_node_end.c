#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
**add_node_end - adds a new node to thelist
*@head: list name
*@str: string to add
*Return: On success 1.
*/

list_t *add_node_end(list_t **head, const char *str)
{
	int count = 0;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (head == NULL)
		return (NULL);

	if (str == NULL)
		return (NULL);

	new->str = strdup(str);

	while (new->next != NULL)
	{
		last = new->next;
		count++;
	}
	new->len = count;
	last->next = new;
	return (last);
}
