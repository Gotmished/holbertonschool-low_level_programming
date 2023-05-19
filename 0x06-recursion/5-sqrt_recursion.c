#include "main.h"

/**
 * _sqrt_recursion - returns the square root of a number
 * @n: the number in question
 * Return: -1, if n lacks a square root
 * otherwise, the square root
 */

int _sqrt_recursion(int n)
{
	if (n <= 0)
	{
		return (-1);
	}
	return (true_sqrt(n, 0));
}

/**
 * true_sqrt - completes the recursive steps needed in the
 * function above
 * @n: the number for which to find the square root
 * @i: the iterative factor
 * Return: the square root of n
 */

int true_sqrt(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	return (true_sqrt(n, i + 1));
}
