#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all of the function's parameters
 * @n: the number of parameters
 * Return: 0, if n == 0. Otherwise, the sum as aforementioned
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	int sum;
	unsigned int i;

	va_start(list, n);
	sum = 0;
	i = 0;
	while (i < n)
	{
		sum = sum + va_arg(list, int);
		i = i + 1;
	}
	
	if (n == 0)
	{
		return (0);
	}
	va_end(list);
	return (sum);
}
