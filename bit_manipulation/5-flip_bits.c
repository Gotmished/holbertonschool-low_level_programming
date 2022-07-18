#include <stdlib.h>
#include "main.h"

/**
 * count_bits - a counting function to feed into flip_bits
 * @a: n ^ m from below
 * Return: a count to be sent below
 */

unsigned int count_bits(unsigned long int a)
{
	unsigned int count;

	count = 0;
	while (a > 0)
	{
		a = a & (a - 1);
		count = count + 1;
	}
	return (count);
}

/**
 * flip_bits - returns the number of bits needed to flip
 * to get from one number to another
 * @n: the number in which bits are to be flipped
 * @m: the reference number
 * Return: the number of bits needed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (count_bits(n ^ m));
}
