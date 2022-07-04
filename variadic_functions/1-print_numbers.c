#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: a string to be printed between numbers
 * @n: the number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);
	i = 0;
	while (i < n)
	{
		if (separator == NULL || i == 0)
		{
			printf("%d", va_arg(list, int));
		}
		else
		{
			printf("%s%d", separator, va_arg(list, int));
		}
		i = i + 1;
	}
	va_end(list);
	printf("\n");
}
