#include <stdio.h>

/**
 * main - this program prints the alphabet in
 * lowercase, followed by a new line
 * Return: always 0 (success)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch = ch + 1)
	{
		putchar(ch);
		putchar('\n');
	}
	return (0);
}
