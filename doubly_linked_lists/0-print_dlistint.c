#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: a pointer to the first element
 * Return: the number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	int number;

	number = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		number = number + 1;
	}
	return (number);
}
