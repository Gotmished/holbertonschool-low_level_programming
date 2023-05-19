#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: the memory area to be filled
 * @n: the number of bytes in the memory pointed to
 * @b: the character (constant byte) to copy
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i = i + 1;
	}
	return (s);
}
