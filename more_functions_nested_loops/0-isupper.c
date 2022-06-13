#include "main.h"

/**
 * _isupper - checks for an uppercase character
 * @c: the character to check
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	char ch;
	int n;

	ch = 'A';
	n = 0;
	while (ch <= 'Z')
	{
		if (c == ch)
		{
			n = 1;
		}
		ch = ch + 1;
	}
	return (n);
}
