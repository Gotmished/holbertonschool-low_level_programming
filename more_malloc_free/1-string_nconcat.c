#include <stdlib.h>
#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to the string
 * Return: returns the string length
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

/**
 * *string_nconcat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: the number of bytes to be concatenated from s2
 * Return: a pointer to a space allocated in memory containing
 * s1 and the first n bytes of s2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	i = _strlen(s1);
	j = _strlen(s2);

	s = malloc(sizeof(*s) * (i + j + 1));
	if (s == NULL)
	{
		return (NULL);
	}

	k = 0;
	while (k < i)
	{
		s[k] = s1[k];
		k = k + 1;
	}
	k = 0;
	while (k < j && j != n)
	{
		s[k + i] = s2[k];
		k = k + 1;
	}
	s[i + j] = '\0';
	return (s);
}
