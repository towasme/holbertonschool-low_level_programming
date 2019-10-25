#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>

/**
 *main - runs the functions
 *@argc: number of arguments
 *@argv: function pointer
 *Return: Always
 */
int main(int argc, char *argv[])
{
int hola;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((argv[2][0] != '+' && argv[2][0] != '-' && *argv[2] != '*'
	 && *argv[2] != '/' && *argv[2] != '%') || (argv[2][1] != '\0'))
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}

	hola = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", hola);
	return (0);
}
