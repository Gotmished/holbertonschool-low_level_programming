#include "main.h"

/**
 * puts2 - prints every other character
 * in a string, followed by a new line
 * @str: the string in question
 */

void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i = i + 1;
	}
	_putchar('\n');
}
