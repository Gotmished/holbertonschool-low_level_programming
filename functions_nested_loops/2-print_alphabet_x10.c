#include "main.h"

/**
 * print_alphabet_x10 - this script prints the
 * alphabet ten times in lowercase, followed
 * by a new line
 */

void print_alphabet_x10(void)
{
	char ch;
	int n;

	n = 0;
	while (n < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch = ch + 1;
		}
		_putchar('\n');
		n = n + 1;
	}
}
