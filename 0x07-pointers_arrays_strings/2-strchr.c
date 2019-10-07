#include "holberton.h"
/**
 **_strchr - concatenates two strings
 *@s: pointer string
 *@c: pointer destination
 *Return: Always
 */
char *_strchr(char *s, char c)
{
int n;

	for (n = 0; s[n] != '\0'; n++)
		{
		if (s[n] == c)
			{
			s = s + n;
			return (s);
			}
		}
	s = 0;
	return (s);
}
