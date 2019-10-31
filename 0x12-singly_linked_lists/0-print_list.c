#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 *print_list - prints a list
 * @h: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
size_t print_list(const list_t *h)
{
	size_t counter = 0;

	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
		h = h->next;
		counter++;
	}
	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		counter++;
	}
	return (counter);
}
