#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 *dlistint_len - returns the number of elements
 *@h: The character to print
 *Return: On success 1, returns the numbers of nodes.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		if (h->n == '\0')
		{
			return (0);
		}
		else
		{
			h = h->next;
			counter++;
		}
	}
	return (counter);
}
