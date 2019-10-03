#include "holberton.h"
/**
 **reverse_array - concatenates two strings
 *@a: pointer string
 *@n: number of bytes
 *Return: Always
 */
void reverse_array(int *a, int n)
{

int i;
int temp;
int *init = a;
int *fin = a;

	for (i = 0; i < n - 1; i++)
		{
		init++;
		}
	for (i = 0; i < n / 2; i++)
		{
		temp = *init;
		*init = *fin;
		*fin = temp;
		fin++;
		init--;
		}
}
