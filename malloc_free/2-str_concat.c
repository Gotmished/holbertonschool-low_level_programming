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
	char *a, *b, *c;
	unsigned int i, j;

	if (s1 == NULL)
	{
		i = 0;
		b = malloc(1);
	}
	else
	{
		i = strlen(s1);
		b = s1;
	}

	if (s2 == NULL)
	{
		j = 0;
		c = malloc(1);
	}
	else
	{
		j = strlen(s2);
		c = s2;
	}

	a = malloc(sizeof(char) * (i + j) + 1);
	if (a == NULL)
	{
		return (NULL);
	}
	strcpy(a, b);
	strcat(a, c);
	return (a);
}
