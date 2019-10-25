#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 *print_string - check the code for Holberton School students.
 *@n: positive var
 *@separator: var type char
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list lst;
	char* pri;

	va_start(lst, n);

	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
		{
		}
		pri = va_arg(lst, char*);

		if (pri == NULL)
		{
			pri = "(nil)";
		}

		printf("%s", pri);

		if (i == (n - 1))
		{
			printf("\n");
		}
		else
		{
			printf("%s", separator);
		}
	}
}
