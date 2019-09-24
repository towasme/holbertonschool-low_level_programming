#include "holberton.h"
/**
 *print_last_digit - prints the sign of a number
 *@n: variable to be replaced
 *
 *Return: Always
 */
int print_last_digit(int n)
{
n = n % 10;
	if (n < 0)
		{
		n = n * -1;
		}
	_putchar(n);
}
