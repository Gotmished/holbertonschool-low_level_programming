#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: the number of times \ is printed
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		i = 1;
		while (i <= n)
		{
			j = 1;
			while (j <= n)
			{
				if (j == i)
				{
					_putchar('\\');
				}
				else if (j < i)
				{
					_putchar(' ');
				}
				j = j + 1;
			}
			_putchar('\n');
			i = i + 1;
		}
	}
}
