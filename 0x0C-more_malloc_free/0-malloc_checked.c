#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *malloc_checked - creates an array
 *@b: positive integer
 *Return: Always
 */
void *malloc_checked(unsigned int b)
{
unsigned int *c = NULL;

	c = malloc(b);
	if (c == NULL)
	{
		exit(98);
	}
	return (c);
}

