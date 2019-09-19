#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int ch;
for (ch = 00; ch <= 99 ; ch++)
{
putchar(ch);
if (ch != 99)
{
putchar(',');
putchar(' ');
}
else
{
putchar('\n');
}
}
return (0);
}
