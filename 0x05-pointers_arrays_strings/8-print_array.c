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
int b;

for (n = 0; a[n + 1] != '\0'; n++)
{
}
for (b = 0; b < n; b++)
{
if (b == (n - 1))
{
printf("%d", a[b]);
}
else
printf("%d, ", a[b]);
}
printf("\n");
}
