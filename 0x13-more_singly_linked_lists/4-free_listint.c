#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
*free_listint - adds a new node to thelist
*@head: list name
*Return: On success 1.
*/

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = temp->next;
		free(temp);
	}
}
