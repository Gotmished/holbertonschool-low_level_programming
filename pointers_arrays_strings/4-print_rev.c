#include "main.h"

/**
 * print_rev - prints a string in reverse and a newline to stdout
 * @s: the string in question
 */

void print_rev(char *s)
{
	int i, j, k;

	i = 0;
	while (s[i] != '\0')
	{
		i = i + 1;
	}

	j = i;
	k = j - 1;
	while (k >= 0)
	{
		_putchar(s[j]);
		k = k - 1;
	}
	_putchar('\n');
}
