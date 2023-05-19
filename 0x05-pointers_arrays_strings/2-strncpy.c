#include "main.h"

/**
 * *_strncpy - copies a string
 * @dest: points to destination for copied string
 * @src: points to string location
 * @n: specified number of bytes
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
			i = i + 1;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i = i + 1;
	}
	return (dest);
}
