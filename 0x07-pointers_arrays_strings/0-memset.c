#include "holberton.h"
/**
 **_memset - concatenates two strings
 *@s: pointer string
 *@b: pointer destination
 *@n: unsigned int
 *Return: Always
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int a = 0;

	while (a < n)
		{
			s[a] = b;
		a++;
		}
	return (s);
}
