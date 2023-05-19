#include <stdio.h>
#include "main.h"

/**
 * main - prints the program's own name, followed by a new line
 * @argc: the number of arguments
 * @argv: array of arguments
 * Return: 0 (success)
 */

int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", *argv);
	return (0);
}
