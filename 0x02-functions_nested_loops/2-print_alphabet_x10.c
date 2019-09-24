#include "holberton.h"
/**
 * print_alphabet - Prints "alphabet"
 */
void print_alphabet_x10(void)
{
int i;
int x = 0;
while (x <= 9)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
++x;
}
return;
}
