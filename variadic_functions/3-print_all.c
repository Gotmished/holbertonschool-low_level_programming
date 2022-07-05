#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_s - prints a string
 * @s: string to print
 *
 * Return: void
 */
void print_s(va_list s)
{
	char *string;

	string = va_arg(s, char *);
	if (string == NULL)
	{
		string = "(nil)";
	}
	printf("%s", string);
}

/**
 * print_f - prints a float
 * @f: float to print
 *
 * Return: void
 */
void print_f(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * print_i - prints an int
 * @i: int to print
 *
 * Return: void
 */
void print_i(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * print_c - print a char
 * @c: char to print
 *
 * Return: void
 */
void print_c(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_all - prints anything, followed by a new line
 * @format: a list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int i, j;
	char *separator;

	vars_t v[] = {
		{"s", print_s},
		{"f", print_f},
		{"i", print_i},
		{"c", print_c},
		{NULL, NULL}
	};

	if (format == NULL)
	{
		return;
	}
/*	int tab[] = {1, 2, 3, 4, 5};
	vars_t st = {"j", print_j};
	vars_t st_2 = {"h", print_h};
	vars_t v2[] = {
		st,
		st_2,
		{NULL, NULL}
		}; */
	va_start(list, format);
	separator = "";
	i = 0;
	while (format[i] != '\0')
	{
		j = 0;
		while (v[j].t != NULL)
		{
			if (*(v[j].t) == format[i])
			{
				printf("%s", separator);
				v[j].f(list);
				separator = ", ";
				break;
			}
			j = j + 1;
		}
		i = i + 1;
	}
	va_end(list);
	printf("\n");
}
