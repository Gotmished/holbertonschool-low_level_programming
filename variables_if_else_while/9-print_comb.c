#include <stdio.h>

/**
 * main - this program prints all
 * possible single-digit numbers
 * Return: always 0 (success)
 */

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n = n + 1)
	{
		putchar(n);
		if (n != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
