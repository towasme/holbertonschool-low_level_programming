#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int ch;
int h;
for (ch = '0'; ch <= '9' ; ch++)
{
putchar(ch);
}
for (h = 'a'; h <= 'f' ; h++)
{
putchar(h);
}
putchar('\n');
return (0);
}
