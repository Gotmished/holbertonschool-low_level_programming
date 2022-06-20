#include "main.h"

/**
 *true_prime - the iterative function to
 * determine a prime number
 * @n: the number in question
 * @i: the iterative factor
 * Return: 1, if n is a prime number
 * 0 otherwise
 */

int true_prime(int n, int i)
{
	if (i > n / 2)
	{
		return (1);
	}
	else if (n % 2 == 0)
	{
		return (0);
	}
	return (true_prime(n, i + 1));
}

/**
* is_prime_number - returns an indicator if input
* is a prime number
 * @n: the number in question
 * Return: 1, if n is a prime number, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (true_prime(n, 0));
}
