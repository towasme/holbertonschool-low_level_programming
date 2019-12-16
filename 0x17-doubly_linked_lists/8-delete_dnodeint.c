#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 *delete_dnodeint_at_index - deletes a given node
 *@head: The head of the linked list
 *@index: index where the node will be deleted
 *Return: On success 1, returns the numbers of nodes.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head, *aux = *head;
	unsigned int i = 0;

	for (; i < index && (temp->next != NULL); i++)
		temp = temp->next;

	if (*head == NULL || (*head)->next == NULL)
	{
		return (-1);
	}
	else if (i == index)
	{
		free(temp);
		return (1);
	}
	else if (index == 0)
	{
		aux = aux->next;
		free(aux);
		return (1);
	}
	return (-1);
}
