#include "holberton.h"
/**
 *more_numbers - Prints "numbers"
 *
 */
void more_numbers(void)
{
	int i;
	int x = 0;

	while (x <= 9)
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar('0' + i);
		}
		_putchar('\n');
		++x;
	}
}
