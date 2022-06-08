#include "main.h"

/**
 * _abs - computes the absolute value
 * of an integer
 * @n: the integer from which the absolute
 * value is to be found
 * Return: the absolute value of int
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	return (-n);
}
