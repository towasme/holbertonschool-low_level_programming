#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
*free_listint2 - adds a new node to thelist
*@head: list name
*Return: On success 1.
*/

void free_listint2(listint_t **head)
{
	listint_t *temp, *aux;

	aux = *head;

	while (aux != NULL)
	{
		temp = aux;
		aux = aux->next;
		free(temp);
	}
	*head = NULL;
}
