#include <stdio.h>

/* create prototype function containing constructor attribute */
void print_first(void) __attribute__ ((constructor));

/**
 *print_first - prints something ahead of executing main file
 */

void print_first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
