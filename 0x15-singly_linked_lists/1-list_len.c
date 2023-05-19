#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to list_t list to print
 * Return: the number of elements
 */

size_t list_len(const list_t *h)
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
