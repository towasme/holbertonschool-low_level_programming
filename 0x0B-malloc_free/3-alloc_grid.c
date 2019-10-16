#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 ***alloc_grid - creates an array
 *@width: positive integer
 *@height: var typ char
 *Return: Always
 */
int **alloc_grid(int width, int height)
{
int i, a;
int **p = NULL;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	p = malloc((height * width) * sizeof(int));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);
		if (p[i] == NULL)
		{
			for (a = 0; a <= width; a++)
			{
				free(p[a]);
				free(p);
				return (NULL);
			}
		}
	}
	return (p);
}
