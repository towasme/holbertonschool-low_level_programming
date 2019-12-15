#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 *insert_dnodeint_at_index - returns the number of elements
 *@h: The character to print
 *@idx: index where the node will be inserted
 *@n: number
 *Return: On success 1, returns the numbers of nodes.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *aux = *h;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{return (NULL); }
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *h;
		*h = new;
		return (new);
	}
	else if (*h == NULL)
	{
		*h = new;
		return (new);
	}
	while (i < idx)
	{
		i++;
		aux = aux->next;
		if (aux == NULL)
		{return (NULL); }
		else if (i == idx)
		{new->next = aux->next;
			aux->next = new;
			new->prev = aux;
			aux->next->prev = new; }
	}
	return (new);
}