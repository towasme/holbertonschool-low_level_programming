#include "holberton.h"
/**
 *print_rev- Prints
 *@s: pointer
 *Return: Always
 */
void print_rev(char *s)

{
int n;
int c;

	for (n = 0; s[n] != '\0'; n++)
		{
		}
	for (c = (n - 1); s[c] >= 0; c--)
		{
		_putchar(s[c]);
		}
	_putchar('\n');
}
