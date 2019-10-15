#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 **str_concat - creates an array
 *@s1: positive integer
 *@s2: var typ char
 *Return: Always
 */
char *str_concat(char *s1, char *s2)
{
char *new = NULL;
int i, a, b, e, d;
	if (s1 == NULL || s2 == NULL)
		{
		return (new);
		}
	for (i = 0; s1[i] != '\0'; i++)
		{
		}
	for (a = 0; s2[a] != '\0'; a++)
		{
		}
	e = i + a;
	new = malloc(e * sizeof(char));
	if (new == NULL)
		{
		return (NULL);
		}
	for (b = 0; b <= i; b++)
		{
		new[b] = s1[b];
		}
	for (d = 0; d <= a; d++)
		{
		new[i + d] = s2[d];
		}
	return (new);
}
