#include "holberton.h"
/**
 *puts_half - reverse
 *@str: pointer string
 *Return: Always
 */
void puts_half(char *str)
{
int n;
int i;
int x;

	for (i = 0; str[i] != '\0'; i++)
		{
		}
		n = i;
		i = i / 2;
		if (n % 2 != 0)
		{
		i++;
		}
		for (x = 0; x < n; x++)
		{
		if (x >= i)
		_putchar(str[x]);
		}
	_putchar('\n');
}
