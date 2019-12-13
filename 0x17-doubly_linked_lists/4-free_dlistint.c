#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 *free_dlistint - returns the number of elements
 *@head: The character to print
 *Return: On success 1, returns the numbers of nodes.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (temp->next != NULL)
	{
		free(&head->n);
		head = temp->next;
		temp = temp->next;
	}
	free(head);
}
