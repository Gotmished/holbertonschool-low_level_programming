#include "main.h"

/**
 * _islower - checks for lowercase characters
 * @c: checking for this letter
 * Return: 1 if lowercase, 0 otherwise
 */

int _islower(int c)
{
	char ch;
	int n;

	ch = 'a';
	n = 0;
	while (ch <= 'z')
	{
		if (c == ch)
		{
			n = 1;
		}
		ch = ch + 1;
	}
	return (n);
}
