#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
*sum_listint - adds a new node to thelist
*@head: list name
*Return: On success 1.
*/

int sum_listint(listint_t *head)
{
	listint_t *aux;
	int cont = 0;

	if (head != NULL)
	{
		aux = head;
		while (aux != NULL)
		{
		cont += aux->n;
		aux = aux->next;
		}
	return (cont);
	}
	return (0);
}
