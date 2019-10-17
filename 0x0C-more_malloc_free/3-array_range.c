#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 **array_range - creates an array
 *@min: positive integer
 *@max: var typ char
 *Return: Always
 */
int *array_range(int min, int max)
{
int *new;
int c = 0, i;

	if (min > max)
		return (NULL);

	new = malloc((max - min + 1) * sizeof(int));
	if (new == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		new[c] = min + c;
		c += 1;
	}
	return (new);
}
