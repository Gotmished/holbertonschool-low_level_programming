#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - returns a pointer to a 2D array of integers
 * @width: width of the array
 * @height: height of the array
 * Return: NULL on failure, or if width or height are <= 0
 * a pointer, otherwise
 */

int **alloc_grid(int width, int height)
{
	int i, j, **a;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	a = (int **)malloc(sizeof(int *) * height);
	if (a == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < height)
	{
		a[i] = (int *)malloc(sizeof(int) * width);
		if (a[i] == NULL)
		{
			return (NULL);
		}
		i = i + 1;
	}

	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			a[i][j] = 0;
			j = j + 1;
		}
		i = i + 1;
	}
	return (a);
}
