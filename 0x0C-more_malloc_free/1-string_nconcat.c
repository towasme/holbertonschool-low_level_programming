#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 **string_nconcat- creates an array
 *@s1: positive integer
 *@s1: var typ char
 *@n: size in bytes
 *Return: Always
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int i = 0;
unsigned int a = 0;
int b = 0;
unsigned int d = 0;
char *new;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		 s2 = "";

	while (s1[i])
		i++;

	while (s2[a])
		a++;

	if (n >= a)
		{
		n = a;
		}
	new = malloc(i + n + 1);
	if (new == NULL)
	{
		return (NULL);
	}
	for (b = 0; b < i; b++)
		{
		new[b] = s1[b];
		}
	for (d = 0; d < n; d++)
		{
		new[i + d] = s2[d];
		}
	new[i + n] = '\0';
	return (new);
}
