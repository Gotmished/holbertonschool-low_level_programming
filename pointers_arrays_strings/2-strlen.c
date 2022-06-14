#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string in question
 * Return: always 0 (success)
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i = i + 1;
	}
	return (i);
}
