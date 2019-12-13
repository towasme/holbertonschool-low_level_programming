#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 *dlistint_len - prints a list
 *@h: The character to print
 *Return: On success 1, returns the numbers of nodes.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	if (h->next == NULL)
	{
		while (h)
		{
		h = h->prev;
		counter++;
		}
	}
	else if (h->prev == NULL)
	{
		while (h)
		{
		h = h->next;
		counter++;
		}
	}
	return (counter);
}
