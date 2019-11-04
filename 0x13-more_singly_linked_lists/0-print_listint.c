#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 *print_listint - prints a list
 *@h: The character to print
 *Return: On success 1.
 */
size_t print_listint(const listint_t *h)
{

	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
