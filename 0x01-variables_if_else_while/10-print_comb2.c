#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int ch;
for (ch = 0; ch < 100 ; ch++)
{
putchar((ch / 10) + '0');
putchar((ch % 10) + '0');
if (ch != 99)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
