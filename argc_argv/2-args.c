#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments received, followed by a new line
 * @argc: the number of arguments
 * @argv: array of arguments
 * Return: 0 (success)
 */

int main(int argc, char **argv)
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", *(argv + i));
		i = i + 1;
	}
	return (0);
}
