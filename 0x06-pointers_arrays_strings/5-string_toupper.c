#include "holberton.h"
/**
 **_string_toupper - concatenates two strings
 *@s: pointer string
 *Return: Always
 */
char *string_toupper(char *s)
{
int c = 0;

	while (s[c] != '\0')
		{
		if (s[c] >= 'a' && s[c] <= 'z')
			{
			s[c] = s[c] - 32;
			}
		c++;
		}
	return (s);
}
