#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 * beginning with 1 and 2, then a new line.
 * Return: always 0 (success)
 */

int main(void)
{
	long int h, i, j, i0;

	h = 1;
	i = 1;
	j = 2;
	i0 = 1;

	while (h <= 50)
	{
		if (i != 20365011074)
		{
			printf("%ld, ", i);
		}
		else
		{
			printf("%ld\n", i);
		}
		i = j;
		j = j + i0;
		i0 = i;
		h = h + 1;
	}
	return (0);
}
