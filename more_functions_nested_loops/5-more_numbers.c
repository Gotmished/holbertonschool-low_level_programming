#include "main.h"

/**
 * more_numbers: prints numbers 0 to 14
 * followed by a new line
 */

void more_numbers(void)
{
	int i, j;

	i = 48;
	while (i <= 61)
	{
		j = 48;
		while (j <= 57)
		{
			_putchar(j);
			j = j + 1;
		}
		i = i + 1;
	}
	_putchar('\n');
}
