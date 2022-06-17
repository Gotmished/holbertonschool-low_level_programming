#include "main.h"

/**
 * *leet - converts a string to 1337 (leet)
 * @s: the string in question
 * Return: the amended string
 */

char *leet(char *s)
{
	char *x = "aAeEoOtTlL";
	char *y = "4433007711";

	int i, j;

	i = 0;
	while (s[i] != '\0')
	{

		j = 0;
		while (j < 10)
		{
			if (s[i] == x[j])
			{
				s[i] = y[j];
			}
			j = j + 1;
		}
		i = i + 1;
	}
	return (s);
}
