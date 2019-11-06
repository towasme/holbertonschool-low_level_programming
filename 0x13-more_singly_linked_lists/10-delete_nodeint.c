#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
*delete_nodeint_at_index - adds a new node to thelist
*@head: list name
*@index: number
*Return: On success 1.
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new, *aux;
	unsigned int i = 1;

	if (head == NULL)
		return (-1);

	new = *head;
	if (index == 0)
	{
		if (new == NULL)
			return (-1);

		*head = (*head)->next;
		free(new);
		return (1);
	}
	while (i < index && new != NULL)
	{
		i++;
		new = new->next;
		if (new == NULL)
		{
			return (-1);
		}
	}
	aux = new->next;
	new->next = aux->next;
	free(aux);
	return (1);
}
