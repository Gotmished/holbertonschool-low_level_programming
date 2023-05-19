#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * *get_op_func - a function that selects the correct function to
 * perform an operation requested by the user
 * @s: the operator passed as an argument
 * Return: a pointer to the function corresponding to s
 */

int (*get_op_func(char *s))(int, int)
{
	int i;

/* op_t = (char *op, int (*f)) */
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 0;
	while (i < 5)
	{
		/* comparing s with the LH char * in op_t */
		if (strcmp(ops[i].op, s) == 0)
		{
			break;
		}
		i = i + 1;
	}
	/* returning RH function in op_t */
	return (ops[i].f);
}
