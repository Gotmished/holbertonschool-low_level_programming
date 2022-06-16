#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string one
 * @s2: string two
 * Return: negative int if s1 < s2
 * 0 if s1 length = s2 length
 * positive int if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	int i, j;

	i = 0;
	while (s1[i] != '\0')
	{
		i = i + 1;
	}

	j = 0;
	while (s2[j] != '\0')
	{
		j = j + 1;
	}
	return (s2[j] - s1[i]);
}
