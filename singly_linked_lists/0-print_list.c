#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all of the elements of a list_t list
 * @h: pointer to list_t list to print
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	int number = 0;

/* as long as the pointer is pointing to something extant */
	while (h != NULL)
	{
		/* if the pointer is pointing to a NULL list */
		if (h->str ==  NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			/* print len and str, before making h point to next */
			/*
			 * next is a pointer to struct list_s,
			 * which is the struct containing str and len
			 */
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		number = number + 1;
	}
	return (number);
}
