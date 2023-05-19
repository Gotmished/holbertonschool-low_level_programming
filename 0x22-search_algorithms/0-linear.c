#include "search_algos.h"

/**
 * linear_search - searches for a value in an array
 * of integers using the linear search algorithm
 * @array: a pointer to the first element of the array
 * @size: the number of elements in the array
 * @value: the value to search for
 * Return: the first index where value is located,
 * or -1 if value is not present, or if array = NULL
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	i = 0;
	while (i < size)
	{
		printf("Value checked array[%lu] = [%i]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
		i = i + 1;
	}
	return (-1);
}
