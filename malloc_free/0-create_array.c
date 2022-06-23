#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates an array of characters
 * and initialises the array with a specific char
 * @size: the length of the array
 * @c: the initialising character
 * Return: NULL if size = 0, or if failure occurs
 * a pointer to the array otherwise
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	a = malloc(sizeof(char) * size);
	if (a == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < size)
	{
		a[i] = c;
		i = i + 1;
	}
	return (a);
}
