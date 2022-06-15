#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string in question
 */

void rev_string(char *s)
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
		_putchar(s[k]);
		k = k - 1;
	}
	_putchar('\n');
}
