#include "holberton.h"
/**
 *_puts- Prints
 *@str: var
 *Return: Always
 */
void _puts(char *str)
{

int n;

	for (n = 0; str[n]; n++)
		{
		_putchar(str[n]);
		}
	_putchar('\n');
}
