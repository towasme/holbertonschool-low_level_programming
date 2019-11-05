#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
*get_nodeint_at_index - adds a new node to thelist
*@head: list name
*@index: number
*Return: On success 1.
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	listint_t *aux;
	unsigned int i = 0;


	aux = head;

	while (aux)
	{
		if (i == index)
		{
			return (aux);
		}
		i++;
	}
	return (NULL);
}
