#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_realloc- creates an array
 *@ptr: positive integer
 *@old_size: var typ char
 *@new_size: var type
 *Return: Always
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
unsigned int y;
char *str;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	str = malloc(new_size);
	if (str == NULL)
		{
		return (NULL);
		}
	if (ptr == NULL)
		return (str);

	if (new_size > old_size)
	{
		for (y = 0; y < old_size; y++)
		{
			str[y] = ((char *)ptr)[y];
		}
	}
	free(ptr);
	return (str);
}
