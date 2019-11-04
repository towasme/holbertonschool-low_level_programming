#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 **add_nodeint - adds a node to the linked list
 *@head: The character to print
 *@n: constant number
 *Return: On success 1.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = NULL;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
