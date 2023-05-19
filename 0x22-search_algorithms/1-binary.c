#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array
 * of integers using the binary search algorithm
 * @array: a pointer to the first element of the array
 * @size: the number of elements in the array
 * @value: the value to search for
 * Return: the first index where value is located,
 * or -1 if value is not present, or if array = NULL
 */

int binary_search(int *array, size_t size, int value)
{
	int high, low, i;

	low = 0;
	high = size - 1;
	while (low <= high)
	{
		printf("Searching in array: ");
		i = low;
		while (i < high)
		{
			printf("%d, ", array[i]);
			i = i + 1;
		}
		printf("%d\n", array[i]);

		i = (high + low) / 2;
		if (array[i] == value)
		{
			return (i);
		}
		else if (array[i] < value)
		{
			low = i + 1;
		}
		else
		{
			high = i - 1;
		}
	}
	return (-1);
}
