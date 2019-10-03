#include "holberton.h"
/**
 **_strcat - concatenates two strings
 *@dest: pointer string
 *@src: pointer destination
 *Return: Always
 */
char *_strcat(char *dest, char *src)
{

int i;
int j = 0;

	for (i = 0; dest[i] != '\0'; i++)
		{
		}
	while (dest[i] != '\0')
		{
		dest[i + 1] = src[j];
		j++;
		src[j] = '\0';
		}
	return (dest);
}
