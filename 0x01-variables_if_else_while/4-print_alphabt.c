#include <stdio.h>

/**
 * main - this program prints the alphabet in lowercase,
 * followed by a new line. Letters q and e are excluded.
 * Return: always 0 (success)
 */

int main(void)
{
	char ch = 'a';
		while (ch <= 'z')
		{
			if (ch != 'e' && ch != 'q')
			{
				putchar(ch);
			}
			ch = ch + 1;
		}
		putchar('\n');
		return (0);
}
