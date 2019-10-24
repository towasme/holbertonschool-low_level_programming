#include <stdlib.h>
#include "function_pointers.h"
/**
 *int_index - creates an array
 *@array: pointer
 *@size: function pointer
 *@cmp: function pointer
 *Return: Always
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || (size <= 0) || ((*cmp) == NULL))
	{
		return (-1);
	}
	while (i < size)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
