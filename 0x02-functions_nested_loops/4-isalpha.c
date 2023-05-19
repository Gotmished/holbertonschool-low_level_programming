#include "main.h"

/**
 * _isalpha - a function that checks for an
 * alphabetic character
 * @c: checks this character
 * Return: 1 if c is a letter, 0 otherwise
 */

int _isalpha(int c)
{
	char ch_u;
	char ch_l;
	int n;

	ch_l = 'a';
	ch_u = 'A';
	n = 0;
	while (ch_l <= 'z')
	{
		if (c == ch_l)
		{
			n = 1;
		}
		ch_l = ch_l + 1;
	}

	while (ch_u <= 'Z')
	{
		if (c == ch_u)
		{
			n = 1;
		}
		ch_u = ch_u + 1;
	}
	return (n);
}
