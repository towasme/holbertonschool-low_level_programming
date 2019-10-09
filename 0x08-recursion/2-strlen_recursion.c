#include "holberton.h"
/**
 *_strlen_recursion - prints characters
 *@s: pointer string
 *Return: Always
 */
int _strlen_recursion(char *s)
{
int c = 0;
	if (*s != '\0')
		{
		c = 1 + _strlen_recursion(s + 1);
		}
	return (c);
}
