#include "main.h"

/**
 * *cap_string - capitalises all words in a string
 * @s: the string in question
 * Return: the amended string
 */

char *cap_string(char *s)
{
	int i, j;

	char separator[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	i = 0;
	while (s[i] != '\0')
	{
		/* This if statement takes care of a lowercase first letter */
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}

		j = 0;
		while (j < 13)
		{
			if (s[i] == separator[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] = s[i + 1] - 32;
				}
			}
			j = j + 1;
		}
		i = i + 1;
	}
	return (s);
}
