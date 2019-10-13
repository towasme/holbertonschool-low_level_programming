#include <stdio.h>
#include <stdlib.h>
/**
 *main - concatenates two strings
 *@argc: pointer string
 *@argv: pointer destination
 *Return: Always
 */
int main(int argc, char* argv[])
{
int sum, i, c;
char *p;

	if (argc < 0)
		{
		printf("0/n");
		return (0);
		}
	else if (argc > 0)
		{
			for (i = 1; i < argc; i++)
			{
			p = argv[i];
				for (c = 0; p[c]; c++)
				{
					if (p[c] <= 47 || p[c] >= 58)
					{
					printf ("Error\n");
					return (1);
					}
				}
				sum += atoi(argv[i]);
			}
		printf ("%d\n", sum);
		}
	return (0);
}
