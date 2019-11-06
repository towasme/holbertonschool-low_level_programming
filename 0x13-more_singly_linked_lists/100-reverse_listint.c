#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
*reverse_listint - adds a new node to thelist
*@head: list name
*Return: On success 1.
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *aux = NULL, *new = NULL;

	while (*head != NULL)
	{
		aux = (*head)->next;
		(*head)->next = new;
		new = *head;
		*head = aux;
	}
	*head = new;
	return (*head);
}
