#include <stdlib.h>
#include "function_pointers.h"
/**
 *array_iterator - creates an array
 *@array: pointer
 *@size: function pointer
 *@action: function pointer
 *Return: Always
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if ((array) == NULL || (size == 0) || ((*action) == NULL))
	{
		return;
	}
	while (i < size)
	{
		(*action)(array[i]);
		i++;
	}
}
