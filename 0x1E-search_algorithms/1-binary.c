#include "search_algos.h"
/**
* binary_search - searches for a specific index in a array with binary search
* @array: array of de input since main
* @size: size of array
* @value: value to search for
*
* Return: the index asociated with the value
**/
int binary_search(int *array, size_t size, int value)
{
	unsigned int left = 0, right = (size - 1), floor = 0, i = 0;

	if (array)
	{
		while (left <= right)
		{
			printf("Searching in array: ");
			for (i = (left); i < right; i++)
			{
				printf("%d, ", array[i]);
			}
			printf("%d\n", array[i]);
			floor = ((left + right) / 2);
			if (array[floor] < value)
			{
				left = (floor + 1);
			}
			else if (array[floor] > value)
			{
				right = floor - 1;
			}
			else
				return (floor);
		}
	}
return (-1);
}
