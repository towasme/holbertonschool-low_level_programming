#include "holberton.h"

/**
 *factorial - prints characters
 *@n: variable
 *Return: Always
 */
int _sqrt_recursion(int n)
{
int i = 0;
int e;

	e = sqrt_2(n, i);
	if (e < 0)
		{
		return (-1);
		}
	else
		return (e);
}


int sqrt_2(int n, int i)
{

	if (i * i == n && i > 0)
		{
		return (i);
		}
	sqrt_2(n, i + 1);
}
