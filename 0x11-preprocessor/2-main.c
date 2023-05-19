#include <stdio.h>

/**
 * main - prints name of the file this program was compiled from
 * Return: 0 for success
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
