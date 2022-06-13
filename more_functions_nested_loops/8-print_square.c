#include "main.h"

/**
 * print_square - prints a square in the terminal
 * @size: the number of times # is printed
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		i = 1;
		while (i <= size)
		{
			j = 1;
			while (j <= size)
			{
				_putchar('#');
				j = j + 1;
			}
			_putchar('\n');
			i = i + 1;
		}
	}
}
