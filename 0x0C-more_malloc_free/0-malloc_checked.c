#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 *malloc_checked - creates an array
 *@b: positive integer
 *Return: Always
 */
void *malloc_checked(unsigned int b)
{
int *c = NULL;

	c = malloc(b);
	if (c == NULL || c == INT_MAX)
	{
		exit(98);
	}
	return (c);
}

