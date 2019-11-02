#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
*free_list - adds a new node to thelist
*@head: list name
*Return: On success 1.
*/

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		free(head->str);
		free(head);
		temp = temp->next;
		head = temp;
	}
}
