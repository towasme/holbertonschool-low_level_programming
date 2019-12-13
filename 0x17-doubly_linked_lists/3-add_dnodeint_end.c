#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 *add_dnodeint_end - returns the number of elements
 *@head: The character to print
 *@n: number inside the linked list
 *Return: On success 1, returns the numbers of nodes.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *temp = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new;
		new->n = n;
		new->prev = NULL;
		new->next = NULL;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		new->n = n;
		new->next = NULL;
		new->prev = temp;
		temp->next = new;
	}
	return (new);
}
