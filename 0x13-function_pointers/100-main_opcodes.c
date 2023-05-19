#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints opcodes of own main function
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	char *s;
	int a, i;
	/* lone argument is number of bytes */
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	a = atoi(argv[1]);
	if (a < 0)
	{
		printf("Error\n");
		exit(2);
	}

	s = (char *)main;
	i = 0;
	while (i < a)
	{
		if (i == a - 1)
		{
			printf("%.2hhx\n", s[i]);
			break;
		}
		printf("%.2hhx ", s[i]);
		i = i + 1;
	}
	return (0);
}
