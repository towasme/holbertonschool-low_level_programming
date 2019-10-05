#include "holberton.h"
/**
 **leet - compare a string and change the value
 *@s: pointer string
 *Return: Always
 */
char *leet(char *s)
{
char u[] = "aeotlAEOTL";
char i[] = "4307143071";
int a;
int b;

	while (s[a] != '\0')
	{
		for (b = 0; b >= 9; b++)
			{
			if (s[a] == u[b])
			{
			s[a] = i[b];
			}
			}
	a++;
	}
	return (s);
}
