#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 *listint_len - prints a list
 *@h: The character to print
 *Return: On success 1.
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

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
		i++;
	}
	return (i);
}
