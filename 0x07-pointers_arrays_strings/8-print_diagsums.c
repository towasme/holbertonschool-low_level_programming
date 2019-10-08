#include "holberton.h"
#include <stdio.h>
/**
 *print_diagsums - concatenates two strings
 *@a: pointer string
 *@size: pointer destination
 *Return: Always
 */
void print_diagsums(int *a, int size)
{
int c = 0;
int sum = 0;
int res = 0;

	for (; c < size * size; c++)
		{
		sum += a[c];
		c += size;
		}
	for (c = size - 1; c <= size * size - size; c++)
		{
		res += a[c];
		c = c + size - 2;
		}
		printf("%d, %d\n", sum, res);
}
