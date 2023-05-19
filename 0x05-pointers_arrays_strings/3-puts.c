#include "main.h"

/**
 * _puts - prints a string and a newline to stdout
 * @str: the string in question
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i = i + 1;
	}
	_putchar('\n');
}
