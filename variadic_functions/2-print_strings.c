#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: a string to be printed between numbers
 * @n: the number of integers passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *s;

	va_start(list, n);
	i = 0;
	while (i < n)
	{
		s = va_arg(list, char *);
		if (s == NULL)
		{
			s = "(nil)";
		}
		if (separator == NULL || i == 0)
		{
			printf("%s", s);
		}
		else
		{
			printf("%s%s", separator, s);
		}
		i = i + 1;
	}
	va_end(list);
	printf("\n");
}
