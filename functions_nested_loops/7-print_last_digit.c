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
	if (a < 0)
	{
		a = -a;
	}
	_putchar(a + '0');
	return (a);
}
