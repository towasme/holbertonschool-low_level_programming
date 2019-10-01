#include "holberton.h"
/**
 *puts2 - Prints
 *@str: pointer
 *Return: Always
 */
void puts2(char *str)
{

int cont;
int y = 0;

	for (cont = 0; str[cont] != '\0'; cont++)
		{
		}
		while (y < cont)
		{
		_putchar(str[y]);
		y += 2;
		}
	_putchar('\n');
}
