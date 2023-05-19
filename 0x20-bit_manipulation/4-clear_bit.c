#include <stdlib.h>
#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: the number to which the index pertains
 * @index: the given index
 * Return: 1 upon success, -1 upon failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	index = 1 << index;
	*n = *n & ~index;
	/*
	 * Moves 1 along to the indexth bit
	 * inverts so that result goes from 10000000
	 * to 0111111111
	 */
	return (1);
}
