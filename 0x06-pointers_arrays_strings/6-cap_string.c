#include "holberton.h"
/**
 **cap_string - concatenates two strings
 *@s: pointer string
 *Return: Always
 */
char *cap_string(char *s)
{
int c = 0;

	while (s[c] != '\0')
		{
		/*if (s[c] == 32 || s[c] == 46)
			{
			s[c + 1] = s[c + 1] - 32;
			}*/
		if ((s[c] >= 33 && s[c] <= 44)/* || (s[c] == 46)*/ || (s[c] == 59) || (s[c] == 63) || (s[c] == 123) || (s[c] == 125) || (s[c] == 32) || (s[c] == '\t') || (s[c] == '\n'))
			{
			s[c + 1] = s[c + 1] - 32;
			}
		c++;
		}
	return (s);
}
