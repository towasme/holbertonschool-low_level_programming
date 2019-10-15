#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *create_array - creates an array
 *@size: positive integer
 *@c: character
 *Return: Always
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *fifi = NULL;

fifi = malloc(size * sizeof(char));
	if (fifi == NULL || size == 0)
		{
		return (NULL);
		}
	for (i = 0; i < size; i++)
		{
		fifi[i] = c;
		}
	return (fifi);
}
