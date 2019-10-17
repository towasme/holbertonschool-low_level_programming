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
void *c = NULL;

	c = malloc(b + 1);
	if (c == NULL)
	{
		exit (98);
	}
	return (c);
}

