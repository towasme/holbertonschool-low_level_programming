#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 *print_all - check the code for Holberton School students.
 *@format: positive var
 * Return: Always 0.
 */
void print_all(const char * const format, ...)
{
	int i = 0, cont = 0;
	va_list lst;

	va_start(lst, format);
	while (format[cont] != '\0')
		cont++;

	if (format[i] == '\0')
		printf("(nil)");
	else
	{
		while (format[i] != '\0')
		{
			switch (format[i])
			{
				case 'c':
				printf("%c", va_arg(lst, int));
				break;
				case 'i':
				printf("%i", va_arg(lst, int));
				break;
				case 'd':
				printf("%f", (float)(va_arg(lst, double)));
				break;
				case 's':
				printf("%s", va_arg(lst, char*));
				break;
			}
			if (format[i + 1] != '\0' && (format[i] == 'c' || format[i] == 'i' ||
format[i] == 'd' || format[i] == 's'))
				printf(", ");

			i++;
		}
		printf("\n");
	}
	va_end(lst);
}
