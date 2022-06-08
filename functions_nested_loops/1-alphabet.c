#include "main.h"

/**
 * main - this function prints the alphabet
 * in lowercase, followed by a new line
 * Return: always 0 (success)
 */

void print_alphabet(void)
{
	char ch;
	for (ch = 'a'; ch <= 'z'; ch = ch + 1)
	{
		_putchar(ch);
	}
	_putchar('\n');
	return (0);
}
