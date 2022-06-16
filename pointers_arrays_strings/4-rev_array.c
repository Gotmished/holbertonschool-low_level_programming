#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: the array
 * @n: the number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int i, j;

	n = n - 1;
	i = 0;
	while (i < n)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
		i = i + 1;
		n = n - 1;
	}
}
