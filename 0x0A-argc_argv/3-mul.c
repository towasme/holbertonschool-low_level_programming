#include <stdio.h>
#include <stdlib.h>
/**
 *main - concatenates two strings
 *@argc: pointer string
 *@argv: pointer destination
 *Return: Always
 */
int main(int argc, char *argv[])
{
int mul;
int num1;
int num2;

	if (argc > 2)
		{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		mul = num1 * num2;
		printf("%d\n", mul);
		}
	else
		{
		printf("Error\n");
		}
	return (0);
}
