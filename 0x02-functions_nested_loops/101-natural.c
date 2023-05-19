#include <stdio.h>

/**
 * main - computes and prints the sum of all multiples
 * of 3 or 5 below 1024, and a new line
 * Return: always 0 (success)
 */

int main(void)
{
	int i, j;

	j = 0;

	for (i = 1; i < 1024; i = i + 1)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			j = j + i;
		}
	}
	printf("%d\n", j);
	return (0);
}
