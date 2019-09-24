#include "holberton.h"
/**
 * print_alphabet - Prints "alphabet"
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
