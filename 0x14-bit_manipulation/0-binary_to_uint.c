#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 *binary_to_uint - prints a list
 *@b: The character to print
 *Return: On success 1.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int suma = 0;
	int cont = 0, go, bin = 0;

	if (b == NULL)
		return (0);

	while (b[cont])
	{
		cont++;
	}
	for (go = 0; b[go] != '\0'; go++)
	{
		if (b[go] == 48)
		{
			bin = 0;
		}
		else if (b[go] == 49)
		{
			bin = 1;
		}
		else
		{
			return (0);
		}
		suma += (bin * _pow_recursion(2, (cont - 1)));
		cont--;
	}
	return (suma);
}
