#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void main(void)
{
int i;
int x = 0;
while (x <= 9)
{
for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}
putchar('\n');
++x;
}
return;
}
