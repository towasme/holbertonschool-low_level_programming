#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 *sum_dlistint - prints the sum of the list
 *@head: The character to print
 *Return: On success 1, returns the numbers of nodes.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
		{
		sum = sum + head->n;
		head = head->next;
		}
	return (sum);
}
