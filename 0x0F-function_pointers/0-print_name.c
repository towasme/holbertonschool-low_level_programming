#include "function_pointers.h"
#include <stdlib.h>
/**
 *print_name - creates an array
 *@name: pointer
 *@f: function pointer
 *Return: Always
 */
void print_name(char *name, void (*f)(char *))
{
	if ((*f) == NULL || name == NULL)
	{
		return;
	}
	else
	{
		(*f)(name);
	}
}
