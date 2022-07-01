#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the array to search
 * @size: the number of elements in the array
 * @cmp: pointer to the function to be used to compare variables
 * Return: the index of the first element for which cmp does not return 0
 * -1, if no element matches, or if size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}

	if (array != NULL && cmp != NULL)
	{
		i = 0;
		while (i < size)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
			i = i + 1;
		}
		if (i == size)
		{
			return (-1);
		}
	}
	return (-1);
}
