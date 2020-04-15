#include "search_algos.h"
/**
* linear_search - searches for a specific index in a array
* @array: array of de input since main
* @size: size of array
* @value: value to search for
*
* Return: the index asociated with the value
**/
int linear_search(int *array, size_t size, int value)
{
	unsigned int i = 0;

	if (array)
	{
		while (i < size)
		{
			if (array[i] != value)
			{
				printf("Value checked array[%d] = [%d]\n", i, array[i]);
			}
			else if (array[i] == value)
			{
				printf("Value checked array[%d] = [%d]\n", i, array[i]);
				return (i);
			}
			i++;
		}
		return (-1);
	}
	return (-1);
}
