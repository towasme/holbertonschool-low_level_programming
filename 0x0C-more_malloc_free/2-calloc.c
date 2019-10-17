#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 **_calloc - name of the function
 *@nmemb: positive integer
 *@size: var typ char
 *Return: Always
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
int i = 0;
int t = 0;
char *new;

	if (nmemb == 0 || size == 0)
		return (NULL);

	t = nmemb * size;

	new = malloc(t);

	if (new == NULL)
		new = NULL;

	while (i < t)
	{
		new[i] = 0;
		i++;
	}
	return (new);
}
