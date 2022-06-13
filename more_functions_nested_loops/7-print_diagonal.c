#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: the number of times \ is printed
 */

void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		i = 1;
		while (i <= n)
		{
			_putchar('\\');
			i = i + 1;
		}
		_putchar('\n');
	}
}
