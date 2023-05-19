#include <stdio.h>

/**
 * main - this program prints the digits of base 16,
 * (hexadecimal) in lowercase, followed by a new line
 * Return: always 0 (success)
 */

int main(void)
{
	char n;
	char ch;

	for (n = '0'; n <= '9'; n = n + 1)
	{
		putchar(n);
	}
	for (ch = 'a'; ch <= 'f'; ch = ch + 1)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
