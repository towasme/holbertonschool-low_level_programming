#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *set_bit - prints a list
 *@n: The character to print
 *@index: unsignet int
 *Return: On success 1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if ((sizeof(unsigned long int) * 8) < index)
	{
		return (-1);
	}

	if ((*n >> index) ^ 1)
	{
		return (1);
	}
	return (0);
}
