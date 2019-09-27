#include "holberton.h"
/**
 *print_triangle - Prints
 *@size: variable
 */
void print_triangle(int size)
{
int b;
int c;
int d;

if (size <= 0)
_putchar('\n');
	else
	{
	for (b = 0; b < size; b++)
	{
		for (c = 0; c < size; c++)
			{
			d = size - b - 1;
				if (c < d)
				_putchar(' ');
				else
				_putchar('#');
			}
		_putchar('\n');
	}
	}
}
