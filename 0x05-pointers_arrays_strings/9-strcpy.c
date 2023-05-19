#include "main.h"

/**
 * *_strcpy - copies a string to a buffer
 * @dest: points to buffer location
 * @src: points to string location
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, length;

	length = 0;
	while (src[length] != '\0')
	{
		length = length + 1;
	}

	i = 0;
	while (i <= length)
	{
		dest[i] = src[i];
		i = i + 1;
	}
	return (dest);
}
