#include "holberton.h"
/**
 **_strpbrk - concatenates two strings
 *@s: pointer string
 *@accept: pointer destination
 *Return: Always
 */
char *_strpbrk(char *s, char *accept)
{
unsigned int a;
unsigned int b;
	for (a = 0; s[a] != '\0'; a++)
		{
		for (b = 0; accept[b] != '\0'; b++)
			{
			if (s[a] == accept[b])
				{
				s = s + a;
				return (s);
				}
			}
		}
	s = 0;
	return (s);
}
