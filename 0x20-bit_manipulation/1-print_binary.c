#include <stdlib.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to be converted
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
		/*
		 * eg (98) 1100010 becomes
		 *         0110001 and is passed back to the function
		 */
	}
	_putchar((n & 1) + '0');
	/*
	 * Prints result of 1100010
	 *                & 0000001
	 *                =       0
	 */
}
