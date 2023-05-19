#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @src: string to appended
 * @dest: string to append to
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i = i + 1;
	}

	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j = j + 1;
		i = i + 1;
	}
	dest[i] = '\0';
	return (dest);
}
