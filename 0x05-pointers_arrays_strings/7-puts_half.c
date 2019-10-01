#include "holberton.h"
/**
 *puts_half - reverse
 *@s: pointer string
 *Return: Always
 */
void puts_half(char *str)
{
int n;
int i;
int x;

	while (i = 0, str[i] != '\0')
		{
		i++;
		}
	if (i % 2 == 0)
		{
		x = i / 2;
		for (n = x; n < i; n++)
			_putchar(str[n]);
		}
	else
		{
		x = ((x + 1) / 2);
		_putchar(str[x]);
		}
	
}
