#include <stdlib.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number to check
 * @index: the given index
 * Return: the value of the bit at the index; -1 if an error occurs
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	/* For a 64-bit machine */
	if (index > 63)
	{
		return (-1);
	}

	value = (n >> index) & 1;
	/*
	 * eg 3 (0011)
	 *    1 (0001)
	 * &  =  0001
	 * and 1 is returned
	 */
	return (value);
}
