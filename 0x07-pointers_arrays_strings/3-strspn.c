#include "holberton.h"
/**
 *_strspn - concatenates two strings
 *@s: pointer string
 *@accept: pointer destination
 *Return: Always
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int a;
unsigned int b = 0;
	for (a = 0; s[a] != '\0'; a++)
		{
		while (accept[b] != '\0')
			{
			if (s[a] == accept[b])
				{
				break;
				}
			b++;
			}
			if (!accept[b])
			{
			break;
			}
		}
	return (a);
}
