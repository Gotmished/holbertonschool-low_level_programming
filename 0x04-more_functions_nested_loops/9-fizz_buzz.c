#include <stdio.h>

/**
 * main - print 1 to 100 but
 * For multiples of 3 print 'Fizz'
 * For multiples of five print 'Buzz'
 * For multiples of both print 'FizzBuzz'
 * Return: always 0 (success)
 */

int main(void)
{
	int i;

	i = 1;
	while (i <= 99)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", i);
		}
		i = i + 1;
	}
	i = 100;
	while (i <= 100)
	{
		printf("Buzz");
		i = i + 1;
	}
	printf("\n");
	return (0);
}
