#include "function_pointers.h"
#include <stdio.h>
/**
 *print_name - creates an array
 *@name: pointer
 *@f: function pointer
 *Return: Always
 */
void print_name(char *name, void (*f)(char *))
{
	if ((*f) == NULL)
	{
		return;
	}
	else
	{
		(*f)(name);
	}
}
