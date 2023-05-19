#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer to listint_t list to print
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	int number = 0;

/* as long as the pointer is pointing to something extant */
	while (h != NULL)
	{
		h = h->next;
		number = number + 1;
	}
	return (number);
}
