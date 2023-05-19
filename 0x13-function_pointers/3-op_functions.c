#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - finds the sum of two integers
 * @a: the first integer
 * @b: the second integer
 * Return: the sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - finds the difference between two integers
 * @a: the first integer
 * @b: the second integer
 * Return: the difference between a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - finds the product of two integers
 * @a: the first integer
 * @b: the second integer
 * Return: the product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - finds the division of two integers
 * @a: the numerator
 * @b: the denominator
 * Return: the division of a by b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - finds the remainder following division of two integers
 * @a: the numerator
 * @b: the denominator
 * Return: the remainder of dividing a by b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
