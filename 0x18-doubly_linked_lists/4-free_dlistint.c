#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: a pointer to the first element
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temporary;

	while (head != NULL)
	{
		/*
		 * Let temporary store what head stores (address
		 * of first node)
		 */
		temporary = head;
		/*
		 * Then, let head store what next in the head node
		 * stores, which is the address of the next node
		 */
		head = head->next;
		free(temporary);
	}
}
