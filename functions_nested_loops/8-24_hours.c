#include "main.h"

/**
 * jack_bauer - prints every minute of Jack Bauer's
 * day, beginning at 00:00, and ending at 23:59
 */

void jack_bauer(void)
{
	int min, hr;

	min = 0;
	hr = 0;
	while (hr < 24)
	{
		while (min < 60)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar (':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
			min = min + 1;
		}
		hr = hr + 1;
	}
}
