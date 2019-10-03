#include "holberton.h"
/**
 **_strcpy - reverse
 *@dest: pointer string
 *@src: pointer destination
 *Return: Always
 */
char *_strcpy(char *dest, char *src)
{
int i;
int n;

	for (n = 0; src[n]; n++)
		{
		}
	for (i = 0; i < n; i++)
		{
		dest[i] = src[i];
		}
	return (dest);
}
