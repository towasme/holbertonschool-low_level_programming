#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *print_binary - prints a list
 *@n: The character to print
 *Return: On success 1.
 */
void print_binary(unsigned long int n)
{

	if (n > 1)
		print_binary(n >> 1);

	if (n & 1)
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
}
