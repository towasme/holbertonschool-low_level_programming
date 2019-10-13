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
int sum;
int i;

	if (argc < 1)
		{
		printf("0/n");
		return (0);
		}
	else if (argc > 0)
		{
		for (i = 1; i < argc; i++)
			{
			if (atoi(argv[i]) <= 47 || atoi(argv[i]) >= 58)
				{
				printf ("Error\n");
				}
			else
				{
				sum += atoi(argv[i]);
				}
			printf ("%d\n", sum);
			}
		}
	return (0);
}
