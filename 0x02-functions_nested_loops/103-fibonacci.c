#include <stdio.h>

/**
 * main - prints the sum of even-valued
 * Fibonacci numbers not exceeding 4,000,000
 * Return: always 0 (success)
 */

int main(void)
{
	long int sum, h, i, j, i0;

	sum = 0;
	h = 1;
	i = 1;
	j = 2;
	i0 = 1;

	while (h <= 33)
	{
		if (i % 2 == 0 && i <= 4000000)
		{
			sum = sum + i;
		}
		i = j;
		j = j + i0;
		i0 = i;
		h = h + 1;
	}
	printf("%ld\n", sum);
	return (0);
}
