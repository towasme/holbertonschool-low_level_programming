#include "holberton.h"
/**
 *print_line - Prints numbers from 0 to 9
 *@n: var
 *
 */
void print_line(int n)
{
	int b;

	if (n <= 0)
	_putchar('\n');
	else
		{
		for (b = 0; b <= n; b++)
			_putchar('_');
		}
	_putchar('\n');
}
