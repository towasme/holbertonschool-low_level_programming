#include "holberton.h"
/**
 *_isalpha - Checks for lowercase, letter or uppercase character
 *@c: variable to be replaced
 *
 *Return: Always
 */
int _isalpha(int c)
	{
		if (c >= 65 && c <= 122)
			{
			return (1);
			}
		else
			{
			return (0);
			}
	}
