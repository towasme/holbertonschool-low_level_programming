#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
*pop_listint - adds a new node to thelist
*@head: list name
*Return: On success 1.
*/

int pop_listint(listint_t **head)
{
	int aux = 0;

	listint_t *del;

	if (*head == NULL)
		return (0);

	del = *head;
	aux = del->n;

	*head = (*head)->next;
	free(del);
	return (aux);
}
