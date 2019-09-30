#include "holberton.h"
/**
 *swap_int Prints
 *
 *@*a: pointer a
 *@b: pointer b
 *
 *Return: Always
 */
void swap_int(int *a, int *b)
{
int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
