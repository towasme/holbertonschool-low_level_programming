#include "holberton.h"
/**
 *print_square- Prints
 *@size: variable
 */
void print_square(int size)
{
int b;
int c;

	if (size > 0)
	{
		for (b = 1; b <= size; b++)
		{
			for (c = 1; c <= size; c++)
			{
				_putchar('#');
			}
		_putchar('#');
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
