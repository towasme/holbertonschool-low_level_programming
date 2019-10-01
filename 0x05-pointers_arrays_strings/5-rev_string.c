#include "holberton.h"
/**
 *rev_string - reverse
 *@s: pointer string
 *Return: Always
 */
void rev_string(char *s)
{
int n;
int temp;
int x;
int b;

	for (n = 0; s[n] != '\0'; n++)
		{
		}
	for (b = 0; b < n - 1; b++)
		{
		x++;
		}
	for (b = 0; b < n / 2; b++)
		{
		temp = s[x];
		s[x] = s[b];
		s[b] = temp;
		x--;
		}
}
