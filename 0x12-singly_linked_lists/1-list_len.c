#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 *list_len - prints a list length
 *@h: The character to print
 *Return: On success 1.
 */

size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		if (h == NULL)
		{
			h = h->next;
		}
		else
		{
			h = h->next;
		}
		counter++;
	}
	return (counter);
}
