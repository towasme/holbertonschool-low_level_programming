#include "holberton.h"
/**
 **_strncat - concatenates two strings
 *@dest: pointer string
 *@src: pointer destination
 *@n: number of bytes
 *Return: Always
 */
char *_strncat(char *dest, char *src, int n)
{

int i;
int j = 0;

	for (i = 0; dest[i] != '\0'; i++)
		{
		}
	while (j < n && src[j] != '\0')
		{
		dest[i + j] = src[j];
		j++;
		}
	return (dest);
}
