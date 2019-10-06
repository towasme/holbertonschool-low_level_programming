#include "holberton.h"
/**
 **rot13 - encrypts the phrase with ROT13
 *@s: pointer string
 *Return: Always
 */
char *rot13(char *s)
{
char u[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char i[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
int a = 0;
int b = 0;

	while (s[a] != '\0')
	{
		for (b = 0; b <= 54; b++)
			{
			if (s[a] == u[b])
			{
			s[a] = i[b];
			break;
			}
			}
	a++;
	}
	return (s);
}
