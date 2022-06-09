#include "main.h"

/**
 * times_table - prints the 9-times table, beginning with 0
 */

void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i = i + 1)
	{
		for (j = 0; j <= 9; j = j + 1)
		{
			k = i * j;
			if (j == 0)
			{
				_putchar(k + '0');
				_putchar(',');
			}

			if (k >= 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}

			else if (k < 10 && j != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			}
		}
		_putchar('\n');
	}
}
