#include "holberton.h"
/**
 **_strncat - concatenates two strings
 *@dest: pointer string
 *@src: pointer destination
 *@n: number of bytes
 *Return: Always
 */
char *_strncpy(char *dest, char *src, int n)
{

int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		{
		dest[i] = src[i];
		}
	for ( ; i < n; i++)
		{
		dest[i] = '\0';
		}
	return (dest);
}
