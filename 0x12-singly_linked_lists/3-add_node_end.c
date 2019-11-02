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
	list_t *new, *last = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}

	while (str[count])
		count++;

	new->len = count;
	new->str = strdup(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		while (last->next)
			last = last->next;
	}
	last->next = new;

	return (new);
}
