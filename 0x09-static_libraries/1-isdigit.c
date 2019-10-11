#include "holberton.h"
/**
 *_isdigit - Checks for lowercase character
 *@c: variable to be replaced
 *
 *Return: Always
 */
int _isdigit(int c)
{
	if (c < 58 && c > 47)
		{
		return (1);
		}
	else
		{
		return (0);
		}
}
