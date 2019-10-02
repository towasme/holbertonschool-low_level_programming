#include "holberton.h"
#include <stdio.h>
/**
 *print_array - reverse
 *@a: pointer string
 *@n: var n
 *Return: Always
 */
void print_array(int *a, int n)
{
int b = n;

	for (n = 0; a[n + 1] != '\0'; n++)
	{
		if (n == (b - 1))
			printf("%d", a[n]);
		else
			printf("%d, ", a[n]);
	}
	printf("\n");
}
