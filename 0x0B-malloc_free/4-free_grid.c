#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *free_grid - creates an array
 *@grid: positive integer
 *@height: var typ char
 *Return: Always
 */
void free_grid(int **grid, int height)
{
int a;

	if (grid == NULL || height <= 0)
		{
		return;
		}
	for (a = 0; a < height; a++)
	{
		free(grid[a]);
		free(grid);
	}
}
