#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @src: string to appended
 * @dest: string to append to
 * @n: the most number of bytes used from src
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i = i + 1;
	}

	j = 0;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i = i + 1;
		j = j + 1;
	}
	dest[i] = '\0';
	return (dest);
}
