#include "holberton.h"
/**
 **_strchr - concatenates two strings
 *@s: pointer string
 *@c: pointer destination
 *Return: Always
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
		{
		if (*s == c)
		{
		return (s);
		}
		s++;
		}
	if (*s == c)
		{
		return (s);
		}
	else
		{
		return ('\0');
		}
}
