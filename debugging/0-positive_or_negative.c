#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * positive_or_negative - prints if integer is positive or negative
 * @i: the integer in question
 */

void positive_or_negative(int i)
{
	int n;

	n = i;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
}
