#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: the square matrix in question
 * @size: the size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum, sum2, diag;

	sum = 0;
	diag = 0;
	i = 0;
	while (i < size)
	{
		diag = (i * size) + i;
		sum = sum + a[diag];
		i = i + 1;
	}

	sum2 = 0;
	j = 0;
	while (j < size)
	{
		diag = (j * size) + size - j - 1;
		sum2 = sum2 + a[diag];
		j = j + 1;
	}
	printf("%d, %d\n", sum, sum2);
}
