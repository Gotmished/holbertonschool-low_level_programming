#include <stdio.h>

/**
 * main - this program prints all single-digit numbers
 * of base 10 beginning at 0, followed by a new line.
 * Return: always 0 (success)
 */

int main(void)
{
	char nu;

	for (nu = '1'; nu <= '9'; nu = nu + 1)
	{
		putchar(nu);
	}
	putchar('\n');
	return (0);
}
