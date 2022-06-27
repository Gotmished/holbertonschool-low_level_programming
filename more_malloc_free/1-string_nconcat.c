#include <stdlib.h>
#include "main.h"

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
		i = 0;
	}
	else
	{
		i = 0;
		while (s1[i] != '\0')
		{
			i = i + 1;
		}
	}

	if (s2 == NULL)
	{
		j = 0;
	}
	else
	{
		j = 0;
		while (s2[j] != '\0')
		{
			j = j + 1;
		}
	}

	if (j > n)
	{
		j = n;
	}

	s = malloc(sizeof(char) * (i + j + 1));
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
	while (k < j)
	{
		s[k + i] = s2[k];
		k = k + 1;
	}
	s[i + j] = '\0';
	return (s);
}
