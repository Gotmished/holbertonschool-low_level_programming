#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: a pointer to a string of 0 and 1 chars
 * Return: the converted number
 * 0, if b is NULL, or if supplied chars are not 0 or 1.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int conv;
	int i;

	if (b == NULL)
	{
		return (0);
	}

	conv = 0;
	i = 0;
	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			conv = conv << 1;
			conv = conv + b[i] - '0';
		}
		else
		{
			return (0);
		}
		i = i + 1;
	}
	return (conv);
}
