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
	dlistint_t *temp = *head;
	unsigned int i = 0;

	for (; i < index && (temp->next != NULL); i++)
		temp = temp->next;

	if (index == 0 || *head == NULL)
	{
		free((*head)->n);
		free(head);
		return (1);
	}
	else if (i == index)
	{
		free(temp->n);
		free(temp);
		return (1);
	}
	return (-1);
}
