#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed, followed by a new line
 * @argc: the number of arguments
 * @argv: array of arguments
 * Return: 0 (success)
 */

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
