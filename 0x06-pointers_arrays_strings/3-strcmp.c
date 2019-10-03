#include "holberton.h"
/**
 **_strcmp - concatenates two strings
 *@s1: pointer string
 *@s2: pointer destination
 *Return: Always
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;
int u = 0;

	for (i = 0; s1[i] != '\0'; i++)
		{
		for (u = 0; s2[u] != '\0'; u++)
			{
			if (s1[i] == s2[u])
				{
				return (0);
				}
			else
				{
				return (s1[i] - s2[u]);
				}
			}
		}
	return (0);
}
