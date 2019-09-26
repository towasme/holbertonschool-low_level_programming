#include "holberton.h"
/**
 *print_diagonal - Prints
 *@n: variable
 */
void print_diagonal(int n)
{
int b;
int c;

	if (n > 0)
	{
		for (b = 1; b <= n; b++)
		{
			for (c = 2; c <= b; c++)
			{
				_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
