#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all of the elements of a listint_t list
 * @h: pointer to listint_t list to print
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int number = 0;

/* as long as the pointer is pointing to something extant */
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		number = number + 1;
	}
	return (number);
}
