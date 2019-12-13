#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 *get_dnodeint_at_index - returns the number of elements
 *@head: The character to print
 *@index: the index to return
 *Return: On success 1, returns the numbers of nodes.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int cont = 0;

		while (temp)
		{
			if (head == NULL)
			{
				return (NULL);
			}
			else if (cont == index)
			{
				return (temp);
			}
			cont++;
			temp = temp->next;
		}
	return (temp);
}

