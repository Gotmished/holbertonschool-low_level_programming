#include "main.h"

/**
 * print_triangle - prints a triangle in the terminal
 * @size: the height of the triangle
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		i = size;
		while (i >= 0 && i <= size)
		{
			j = 0;
			while (j <= size)
			{
				if (j < i)
				{
					_putchar(' ');
				}
				else if (j <= size)
				{
					_putchar('#');
				}
				++j;
			}
			_putchar('\n');
			i = i - 1;
		}
	}
}
