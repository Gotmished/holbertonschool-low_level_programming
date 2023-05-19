#include "main.h"

/**
 * flip_bits - returns the number of bits to flip to make one number
 * resemble another
 * @n: the number in which flipping is to occur
 * @m: the reference number
 * Return: the number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count;

	count = 0;
	while (n != 0 || m != 0)
	{
		/*
		 * comparing n with 1, and m with one
		 * then comparing the results.
		 * A difference indicates one bit that must be flipped
		 * (Effectively comparing the RH bits of n and m)
		 */
		if ((n & 1) != (m & 1))
		{
			count = count + 1;
		}
		n = n >> 1;
		m = m >> 1;
	}
	return (count);
}
