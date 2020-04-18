#include "search_algos.h"
#include <math.h>
/**
* min - compares for the minimum number
* @step: the step number
* @size: size of array
*
* Return: the minimum value
**/
int min(double step, size_t size)
{
	if (step < size)
		return (step);
	return (size);
}

/**
* jump_search - searches for a specific index in a array with binary search
* @array: array of de input since main
* @size: size of array
* @value: value to search for
*
* Return: the index asociated with the value
**/
int jump_search(int *array, size_t size, int value)
{
	double step = sqrt(size), prev = 0;

	if (array)
	{
		while (array[(min(step, size) - 1)] <= value)
		{
			prev = step;
			step += sqrt(size);
			if (prev >= size)
				return (-1);
		}
		while (array[(int)prev] < value)
		{
			prev++;
			if (prev == min(step, size))
				return (-1);
		}
		if (array[prev == value])
			return (prev);
	}
	return (-1);
}
