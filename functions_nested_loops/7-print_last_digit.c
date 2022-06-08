#include "main.h"

/**
 * print_last_digit - returns the value of
 * the last digit
 * @n: the integer from which the last
 * digit is obtained
 * Return: the last digit of n
 */

int print_last_digit(int n)
{
	int a;

	a = n % 10;
	if (n < 0)
	{
		n = -n;
	}
	_putchar(a + '0');
	return (a);
}
