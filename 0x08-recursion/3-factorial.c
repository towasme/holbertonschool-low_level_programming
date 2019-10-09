#include "holberton.h"
/**
 *factorial - prints characters
 *@n: variable
 *Return: Always
 */
int factorial(int n)
{

	if (n > 0)
		{
		return (n * factorial(n - 1));
		}
	else if (n < 0)
		{
		return (-1);
		}
	else
		{
		return (1);
		}
}
