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
	int i = 0;
	va_list lst;
	char *prt = NULL;

	va_start(lst, format);
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(lst, int));
				break;
			case 'i':
				printf("%d", va_arg(lst, int));
				break;
			case 'f':
				printf("%f", va_arg(lst, double));
				break;
			case 's':
				prt = va_arg(lst, char*);
				if (prt == NULL)
				{
					prt = ("(nil)");
				}
				printf("%s", prt);
				break;
			default:
				break;
		}
		if (format[i + 1] != '\0' && (format[i] == 'c' || format[i] == 'f' ||
format[i] == 'd' || format[i] == 's'))
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
	va_end(lst);
}
