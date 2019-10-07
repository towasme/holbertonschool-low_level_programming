#include "holberton.h"
/**
 **_memcpy - copies memory area
 *@dest: pointer string
 *@src: pointer destination
 *@n: unsigned int
 *Return: Always
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int a;

	while (a < n)
		{
		src[a] = dest[a];
		a++;
		}
	return (dest);
}
