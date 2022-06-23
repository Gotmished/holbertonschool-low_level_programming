#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the mimimum number of coins to make change
 * for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 1 and print 'Error' if any number of arguments
 * other than one is passed
 * 0 if the number passed is negative
 */

int main(int argc, char **argv)
{
	int coins[] = {25, 10, 5, 2, 1};
	int i, count, a;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	while (a < 0)
	{
		printf("0\n");
		return (0);
	}

	i = 0;
	if (i < 5)
	{
		count = 1;
		while (a >= coins[i])
		{
			count = count + 1;
			a = a - coins[i];
		}
		i = i + 1;
	}
	printf("%d\n", count);
	return (0);
}
