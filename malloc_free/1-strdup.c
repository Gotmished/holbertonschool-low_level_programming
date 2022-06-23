#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * containing a copy of a string
 * @str: the string
 * Return: a pointer
 */

char *_strdup(char *str)
{
	char *a;
	unsigned int i, j;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (str[i] != '\0')
	{
		i = i + 1;
	}

	a = malloc(sizeof(char) * i);
	if (a == NULL)
	{
		return (NULL);
	}

	j = 0;
	while (j < i)
	{
		a[j] = str[j];
		j = j + 1;
	}
	return (a);
}
