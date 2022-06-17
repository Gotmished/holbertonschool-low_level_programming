#include "main.h"

/**
 * *_strpbrk - searches a string for any set of bytes
 * @s: the string in question
 * @accept: the string to check
 * Return: pointer to byte in s that matches
 * a byte in accept, NULL otherwise
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (*(s + i) != '\0')
	{
		j = 0;
		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
			{
			/* returns string remainder whence match occurs */
				return (s + i);
			}
			j = j + 1;
		}
		i = i + 1;
	}
	return (0);
}
