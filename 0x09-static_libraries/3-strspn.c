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
unsigned int b = 0, cont = 0, res;
	for (a = 0; s[a] != '\0'; a++)
		{
		for (b = 0; accept[b]; b++)
			{
			if (s[a] == accept[b])
				{
				cont++;
				res = 1;
				}
			}
		if (res == 0)
		{
			break;
		}
		else
		{
		res = 0;
		}
		}
	return (cont);
}
