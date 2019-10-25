#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 *sum_them_all - check the code for Holberton School students.
 *@n: positive var
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i = 0;
	va_list lst;

	va_start(lst, n);

	for (i = 0; i < n; i++)
	{
		int n = va_arg(lst, int);

		sum += n;
	}
	va_end(lst);
	return (sum);
}
