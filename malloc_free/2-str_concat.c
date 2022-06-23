#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * Return: NULL on failure, the concatenated result otherwise
 */

char *str_concat(char *s1, char *s2)
{
	char *a;
	unsigned int i, j;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1 == NULL)
		{
			i = 0;
		}
		i = i + 1;
	}

	j = strlen(s2);
	if (s2 == NULL)
	{
		j = 0;
	}

	a = malloc(sizeof(char) * (i + j) + 1);
	if (a == NULL)
	{
		return (NULL);
	}

	strcpy(a, s1);
	strcat(a, s2);
	return (a);
}
