#include "holberton.h"

/**
 *sqrt_2 - prints characters
 *@n: variable
 *@i: var 2
 *Return: Always
 */

int sqrt_2(int n, int i)
{

	if (i * i != n && i > 0)
		{
		sqrt_2(n, i + 1);
		}
	return (i);
}

/**
 *_sqrt_recursion - prints characters
 *@n: variable
 *Return: Always
 */
int _sqrt_recursion(int n)
{
int i = 0;
int e;

	if (n < 0)
		{
		return (-1);
		}
	else 
		{
		e = sqrt_2(n, i);
		return (e);
		}
	return (e);
}

