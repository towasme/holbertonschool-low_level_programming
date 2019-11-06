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
	listint_t *temp;

	if (*head == NULL)
		return;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	free(*head);
	head = NULL;
}
