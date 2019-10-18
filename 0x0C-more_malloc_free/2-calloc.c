#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_calloc - name of the function
 *@nmemb: positive integer
 *@size: var typ char
 *Return: Always
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *new;

	if (nmemb == 0 || size == 0)
		return (NULL);

	new = malloc(size * nmemb);

	if (new == NULL)
		new = NULL;

	for (i = 0; i < (size * nmemb); i++)
	{
		new[i] = 0;
	}
	return (new);
}
