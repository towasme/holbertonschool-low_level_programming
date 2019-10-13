#include <stdio.h>
/**
 *main - concatenates two strings
 *@argc: pointer string
 *@argv: pointer destination
 *Return: Always
 */
int main(int argc __attribute__((unused)), char *argv[])
{
int i;

	for (i = 0; i < argc; i++)
		{
		printf("%s\n", argv[i]);
		}
	return (0);
}
