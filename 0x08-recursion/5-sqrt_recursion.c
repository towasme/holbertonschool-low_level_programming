#include "holberton.h"

/**
 *help - prints characters
 *@n: variable
 *@i: var 2
 *return: always
 */

int help(int n, int i)
{


	if (i * i == n)
		{
		return (i);
		}
	if (i * i < n)
		{
		return (help(i + 1, n));
		}
	if ((n % 2) == 0)
		{
		return (-1);
		}
	return (help(i + 1, n));
}

/**
 *_sqrt_recursion - prints characters
 *@n: variable
 *Return: Always
 */
int _sqrt_recursion(int n)
{

	if (n == 0)
		{
		return (0);
		}
	return (help(1, n));
}
