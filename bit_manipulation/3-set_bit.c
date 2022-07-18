#include <stdlib.h>
#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: a pointer to the number that the index refers to
 * @index: the given index
 * Return: 1 upon success, -1 if an error occurs
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	index = 1 << index;
	*n = *n | index;
	/*
	 * initially moves index left, after setting it to 1,
	 * then replaces in n
	 * eg (n = 1024) 10000000000
	 * (index = 5) =>00000100000
	 * (*n | index)  10000100000 = 1056
	 */
	return (1);
}
