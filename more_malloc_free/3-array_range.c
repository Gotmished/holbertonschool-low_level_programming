#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum value to be stored
 * @max: maximum value to be stored
 * Return: a pointer to the created array
 */

int *array_range(int min, int max)
{
	int i, j, *ptr;

	if (min > max)
	{
		return (NULL);
	}

	i = max - min + 1;

	ptr = malloc(sizeof(*ptr) * i);
	if (ptr == NULL)
	{
		return (NULL);
	}

	j = 0;
	while (j <= i)
	{
		ptr[j] = min;
		min = min + 1;
		j = j + 1;
	}
	return (ptr);
}
