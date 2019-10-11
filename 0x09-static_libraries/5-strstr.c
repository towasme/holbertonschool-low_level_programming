#include "holberton.h"
/**
 **_strstr - concatenates two strings
 *@haystack: pointer string
 *@needle: pointer destination
 *Return: Always
 */
char *_strstr(char *haystack, char *needle)
{
int a, d, c;
a = 0;
	while (haystack[a] != '\0')
		{
		d = 0;
		c = a;
		while (haystack[a] == needle[d] && haystack[a] != '\0'
		&& needle[d] != '\0')
			{
			a++;
			d++;
			}
		if (needle[d] == '\0')
		return (haystack + c);
		a = c + 1;
		}
	return ('\0');
}
