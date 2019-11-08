#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *flip_bits - prints a list
 *@n: The character to print
 *@m: unsignet int
 *Return: On success 1.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int comp;
	unsigned int res = 0;

	comp = n ^ m;

	while (comp > 0)
	{
		if ((comp & 1) == 1)
		{
			res++;
		}
		comp = comp >> 1;
	}
	return (res);
}
