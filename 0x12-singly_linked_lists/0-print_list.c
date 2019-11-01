#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 *print_list - prints a list
 *@h: The character to print
 *Return: On success 1.
 */

size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
		}
		counter++;
	}
	return (counter);
}
