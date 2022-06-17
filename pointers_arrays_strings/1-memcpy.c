#include "main.h"

/**
 * *_memcpy - fills memory with a constant byte
 * @src: the memory area to be copied from
 * @n: the number of bytes in the memory pointed to
 * @dest: the memory area to be copied to
 * Return: pointer to memory area dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i = i + 1;
	}
	return (dest);
}
