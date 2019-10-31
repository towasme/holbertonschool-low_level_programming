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

	if (n > 0)
	{
		va_start(lst, n);

		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(lst, unsigned int));

			if (i != (n - 1) && separator != NULL)
			{
				printf("%s", separator);
			}
		}
		va_end(lst);
	}
	printf("\n");
}
