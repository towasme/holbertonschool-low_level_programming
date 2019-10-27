#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 *print_numbers - check the code for Holberton School students
 *@n: positive var
 *@separator: var type char
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list lst;

	va_start(lst, n);

	for (i = 0; i < n; i++)
	{
		if (*separator == '\0')
		{
		}
		else
		{
			printf("%d", va_arg(lst, int));

			if (i < (n - 1) && separator != NULL)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(lst);
}
