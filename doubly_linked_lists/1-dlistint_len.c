#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a
 * linked dlisting_t list
 * @h: a pointer to the first element
 * Return: the number of nodes in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int number;

	number = 0;
	while (h != NULL)
	{
		h = h->next;
		number = number + 1;
	}
	return (number);
}
