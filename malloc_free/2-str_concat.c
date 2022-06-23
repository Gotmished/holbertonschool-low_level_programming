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

	if (s1 == NULL)
	{
		i = 0;
	}
	else
	{
		i = strlen(s1);
	}

	if (s2 == NULL)
	{
		j = 0;
	}
	else
	{
		j = strlen(s2);
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
