#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: checking for this integer
 * Return: 1 and prints + if number > 0
 * 0 and prints 0 if number = 0
 * -1 and prints - if number < 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
	}
	return (-1);
}
