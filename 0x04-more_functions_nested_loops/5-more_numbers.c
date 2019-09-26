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
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
			}
	_putchar((i % 10) + '0');
	++x;
		}
	_putchar('\n');
}
}
