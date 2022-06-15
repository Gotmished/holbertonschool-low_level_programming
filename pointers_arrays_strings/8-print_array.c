#include <stdio.h>
#include "main.h"

/**
 * print_array - prints a certain number of elements
 * in an array, followed by a new line
 * @n: the number of elements
 * @a: the array
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i < n - 1)
		{
			printf("%d, ", a[i]);
			i = i + 1;
		}
		else
		{
			printf("%d", a[i]);
			i = i + 1;
		}
	}
	printf("\n");
}
