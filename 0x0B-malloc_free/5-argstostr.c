#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 **argstostr - creates an array
 *@ac: positive integer
 ***@av: var typ char
 *Return: Always
 */
char *argstostr(int ac, char **av)
{
int i, a;
int k = 0;
int cont = 0;
char *p = NULL;

	if (ac == 0 || av == NULL)
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
	p = malloc(cont * sizeof(char *) + ac + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		while (av[i][a])
		{
			*(p + k) = av[i][a];
			a++;
			k++;
		}
	*(p + k) = '\n';
	a = 0;
	k++;
	}
	p[k] = '\0';
	return (p);
}
