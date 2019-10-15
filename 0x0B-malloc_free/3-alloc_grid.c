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
char *new = NULL;
int i, a, b, e, d;
int size = width * height;

	if (width <= 0 || height <= 0)
		return (NULL);
	new = malloc(size * sizeof(int));
	for (i = 0; s1[i] != '\0'; i++)
		{
		}
	for (a = 0; s2[a] != '\0'; a++)
		{
		}
	e = i + a;
	new = malloc((e + 1) * sizeof(char));
	if (new == NULL)
		{
		return (NULL);
		}
	for (b = 0; b <= }
	for (d = 0; d <= a; d++)
		{
		new[i + d] = s2[d];
		}
	new[i + d] = '\0';
	return (new);
}
