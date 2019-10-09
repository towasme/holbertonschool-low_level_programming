#include "holberton.h"
/**
 *_print_rev_recursion - prints characters
 *@s: pointer string
 *Return: Always
 */
void _print_rev_recursion(char *s)
{
		if (*s != '\0')
		{
		_print_rev_recursion(s + 1);
		_putchar(*s);
		}
}
