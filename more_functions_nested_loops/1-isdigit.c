#include "main.h"

/**
 * _isdigit - checks for a digit between 1 and 9
 * @c: the integer to check
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	int i, n;

	i = 0;
	n = 0;
	while (i <= 9)
	{
		if (c == i)
		{
			n = 1;
		}
		i = i + 1;
	}
	return (n);
}
