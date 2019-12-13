#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 *print_dlistint - prints a list
 *@h: The character to print
 *Return: On success 1, returns the numbers of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;

	if (h->n == '\0')
	{
		return (0);
	}
	else if (h->next == NULL)
	{
		while (h)
		{
		printf("%d\n", h->n);
		h = h->prev;
		counter++;
		}
	}
	else if (h->prev == NULL)
	{
		while (h)
		{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
		}
	}
	return (counter);
}
