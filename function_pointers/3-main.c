#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - performs mathematical operations
 * @argc: the number of arguments passed
 * @argv: an array of pointers to the arguments
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int a, b, (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/* of the form calc num1 operator num2 */
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", f(a, b));
	return (0);
}
