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

	if (n < 0)
	{
		n = -n;
	}
	a = n % 10;
	return (a + '0');
}
