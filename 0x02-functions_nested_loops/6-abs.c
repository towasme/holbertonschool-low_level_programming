#include "holberton.h"
/**
 *_abs - computes the absolute value of an integer
 *@int: variable integer
 *
 *Return: Always
 */
int _abs(int r)
{
	if (r < 0)
	{
		r = (r * (-1));
	}
	else
	{r = r;
	}
return (r);
}
