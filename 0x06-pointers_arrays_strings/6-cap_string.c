#include "holberton.h"
/**
 **cap_string - concatenates two strings
 *@s: pointer string
 *Return: Always
 */
char *cap_string(char *s)
{
int c = 0;
int d;

	while (s[c] != '\0')
	{
		for (d = 0; s[d] == 0; d = 0)
		{
			s[d] = s[d] - 32;
		}
		if ((s[c] >= 33 && s[c] <= 44) || (s[c] == 59)
|| (s[c] == 63) || (s[c] == 123) || (s[c] == 125) ||
(s[c] == 32) || (s[c] == '\t') || (s[c] == '\n'))
			{
			if (s[c + 1] >= 'a' && s[c + 1] <= 'z')
				{
				s[c + 1] = s[c + 1] - 32;
				}
			}
		c++;
	}
	return (s);
}
