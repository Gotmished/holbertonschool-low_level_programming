#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: 0 (success), 1 (error)
 */

int main(int argc, char **argv)
{
	int a, b, c;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		c = a * b;
		printf("%d\n", c);
		return (0);
	}
}
