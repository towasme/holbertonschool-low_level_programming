#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 *add_dnodeint - returns the number of elements
 *@head: The character to print
 *@n: number inside the linked list
 *Return: On success 1, returns the numbers of nodes.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

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
		new->n = n;
		(*head)->prev = new;
		new->next = *head;
		new->prev = NULL;
		*head = new;
	}
	return (new);
}
