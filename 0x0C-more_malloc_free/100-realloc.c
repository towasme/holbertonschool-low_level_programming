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
unsigned int y = 0;
int *str;
	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return(NULL);
	}
	if (new_size > old_size)
		return (ptr);
	else
		str = malloc(new_size + 1);
	if (str == NULL)
		return NULL;

	if (ptr == NULL)
		return (str);

	for (y = 0; y < new_size; y++)
	{
		str[y] = ((char *)ptr)[y];
		free(ptr);
	}
return (str);
}
