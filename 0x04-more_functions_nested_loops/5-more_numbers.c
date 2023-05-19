#include "main.h"

/**
 * more_numbers- prints numbers 0 to 14
 * followed by a new line
 */

void more_numbers(void)
{
	int i, j;

	i = 48;
	while (i <= 57)
	{
		j = 0;
		while (j <= 14)
		{
			if (j >= 10)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
			j = j + 1;
		}
		i = i + 1;
		_putchar('\n');
	}
}
