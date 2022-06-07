#include <stdio.h>

/**
 * main - this program prints all single-digit numbers
 * of base 10 beginning at 0, followed by a new line.
 * Return: always 0 (success)
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n = n + 1)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}
