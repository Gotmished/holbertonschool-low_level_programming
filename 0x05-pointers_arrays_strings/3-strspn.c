#include "main.h"

/**
 * _strspn - calls the length of a prefix substring
 * @s: the string in question
 * @accept: string to check against
 * Return: number of bytes in s that are also in accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int h, i, j, k;

	h = 0;
	i = 0;
	while (s[i] != '\0')
	{
		k = 0;
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				h = h + 1;
				k = 1;
			}
			j = j + 1;
		}
		if (k == 0)
		{
			return (h);
		}
		i = i + 1;
	}
	return (0);
}
