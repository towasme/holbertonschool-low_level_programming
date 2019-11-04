#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
**add_nodeint_end - adds a new node to thelist
*@head: list name
*@n: int to add
*Return: On success 1.
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	last = *head;
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new;
	}
	return (new);
}
