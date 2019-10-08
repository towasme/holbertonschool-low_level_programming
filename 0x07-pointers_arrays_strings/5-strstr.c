#include "holberton.h"
/**
 **_strstr - concatenates two strings
 *@haystack: pointer string
 *@needle: pointer destination
 *Return: Always
 */
char *_strstr(char *haystack, char *needle)
{
int a;
int b;
int c = a;

	for (a = 0; haystack[a] != '\0'; a++)
		{
		for (b = 0; needle != '\0'; b++)
			{
			if (haystack[a] == needle[b] && haystack[a] != '\0' && needle[b] != '\0')
				{
				a++;
				b++;
				}
			if (needle[b] == '\0')
			{
			return (haystack + c);
			a = c + 1;
			}
	return ('\0');
}
