#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: the number of times _ is printed
 */

void print_line(int n)
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
			_putchar('_');
			i = i + 1;
		}
		_putchar('\n');
	}
}
