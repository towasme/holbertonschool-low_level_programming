#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
*insert_nodeint_at_index - adds a new node to thelist
*@head: list name
*@idx: number
*@n: number
*Return: On success 1.
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *aux;
	unsigned int i = 1;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	else if (*head == NULL || new == NULL)
	{
		return (NULL);
	}
	aux = *head;
	while (i < idx)
	{
		i++;
		aux = aux->next;
	}
	if (aux == NULL)
		return (NULL);

	new->next = aux->next;
	aux->next = new;
	return (new);
}
