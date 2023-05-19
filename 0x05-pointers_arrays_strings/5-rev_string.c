#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string in question
 */

void rev_string(char *s)
{
	int i, j, new, stringlength;

	i = 0;
	while (s[i] != '\0')
	{
		i = i + 1;
	}

	stringlength = i;
	i = 0;
	j = stringlength - 1;
	while (i < j)
	{
		new = s[i];
		s[i] = s[j];
		s[j] = new;
		i = i + 1;
		j = j - 1;
	}
}
