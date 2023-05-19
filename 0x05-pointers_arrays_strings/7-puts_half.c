#include "main.h"

/**
 * puts_half - prints the second half of
 * a string, followed by a new line
 * @str: the string in question
 */

void puts_half(char *str)
{
	int i, j;

	i = 0;
	while (str[i] != '\0')
	{
		i = i + 1;
	}

	if (i % 2 == 0)
	{
		j = i / 2;
		while (j < i)
		{
			_putchar(str[j]);
			j = j + 1;
		}
	}
	else
	{
		j = (i + 1) / 2;
		while (j < i)
		{
			_putchar(str[j]);
			j = j + 1;
		}
	}
	_putchar('\n');
}
