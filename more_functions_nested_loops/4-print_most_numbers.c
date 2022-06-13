#include "main.h"

/**
 * print_most_numbers - with the exception
 * of 2 and 4 prints 0 to 9
 */

void print_most_numbers(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		if (i != 2 || i != 4)
		{
			_putchar(i + '0');
		}
		i = i + 1;
	}
	_putchar('\n');
}
