#include <stdlib.h>
#include <stdio.h>

/**
 * main - adds positive numbers
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: 0 if no number is passed to the program
 * 'Error' if one of the numbers passed contains symbols rather than digits
 * Then return 1
 */

int main(int argc, char **argv)
{
	int i, j, k, a, sum;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			j = j + 1;
		}
		i = i + 1;
	}

	k = 1;
	while (k < argc)
	{
		a = atoi(argv[k]);
		if (a >= 0)
		{
			sum = sum + a;
		}
		k = k + 1;
	}
	printf("%d\n", sum);
	return (0);
}
