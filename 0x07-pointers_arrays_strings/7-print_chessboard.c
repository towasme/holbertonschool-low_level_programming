#include "holberton.h"
/**
 *print_chessboard - concatenates two strings
 *@a: pointer destination
 *Return: Always
 */
void print_chessboard(char (*a)[8])
{
int b, c;
	for (b = 0; b <= 7; b++)
		{
		for (c = 0; c <= 7; c++)
			{
			_putchar(a[b][c]);
			if (c == 7)
			_putchar('\n');
			}
		}
}
