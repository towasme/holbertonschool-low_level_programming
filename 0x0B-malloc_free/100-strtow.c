nclude "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 **argstostr - creates an array
 *@ac: positive integer
 ***@av: var typ char
 *Return: Always
 */
char **strtow(char *str)
{
int i = 0, a = 0, k = 0, cont = 0;
char **j

	if (str == "" || str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		while (av[i][a])
		{
			cont++;
			a++;
		}
		a = 0;
	}
	j = malloc(cont * sizeof(char) + ac + 1);
	if (j == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		while (av[i][a] != '\0')
		{
			j[k] = av[i][a];
			a++;
			k++;
		}
		j[k] = '\n';
		a = 0;
		k++;
	}
	j[k] = '\0';
	return (j);
}
