#include "holberton.h"

/**
 *help - prints characters
 *@n: variable
 *@i: var 2
 *Return: Always
 */

int help(int n, int i)
{

	if (i * i == n)
		{
		return (i);
		}
	if (i < n / 2)
		{
		return (help(n, i + 1));
		}
	if (n % 2 != 0)
		{
		return (-1);
		}
	return  (1);
}

/**
 *_sqrt_recursion - prints characters
 *@n: variable
 *Return: Always
 */
int _sqrt_recursion(int n)
{
int i = 1;

	if (n < 0)
		{
		return (-1);
		}
	if (n == 0)
		{
		return (0);
		}
	return (help(n, i));
}
