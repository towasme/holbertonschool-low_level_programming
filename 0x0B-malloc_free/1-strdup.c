#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_strdup - creates an array
 *@str: positive integer
 *Return: Always
 */
char *_strdup(char *str)
{
char *new = NULL;
int i, b;
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
		{
		}
	new = malloc((i + 1) * sizeof(char));
	if (new == NULL)
		{
		return (NULL);
		}
	for (b = 0; b <= i - 1; b++)
		{
		new[b] = str[b];
		}
	return (new);
}
