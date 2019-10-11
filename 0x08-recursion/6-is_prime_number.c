#include "holberton.h"

/**
  *prime - funct
  *@a : variable
  *@y : variable
  *Return: 0 sucess
  */


int prime(int a, int y)
{
	if (y < 2 || y % a == 0)
		{
		return (0);
		}
	else if (a > y / 2)
		{
		return (1);
		}
	return (prime(a + 1, y));
}

/**
 *is_prime_number - prints characters
 *@n: var
 *Return: Always
 */
int is_prime_number(int n)
{

	if (n == 2)
		{
		return (1);
		}
	return (prime(2, n));
}
