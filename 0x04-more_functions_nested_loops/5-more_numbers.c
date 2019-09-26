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
		if (i >= 9)
		{
			_putchar(i + '0');
		}
		else
		{
			_putchar((i % 10) + '0');
		}
		}
		_putchar('\n');
		++x;
		}
}
