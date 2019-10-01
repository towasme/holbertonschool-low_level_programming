#include "holberton.h"
/**
 *print_rev- Prints
 *@s: pointer
 *Return: Always
 */
void print_rev(char *s)

{
int n;

	for (n = 0; s[n] != '\0'; n++)
		{
		}
	while (n > 0)
		{
		n--;
		_putchar(s[n]);
		}
	_putchar('\n');
}
