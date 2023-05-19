#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: a pointer to a pointer to the first element
 * @idx: the index of the list where the node is to be added
 * @n: the data held by the node
 * Return: the address of the new node,
 * or NULL upon failure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int i;

	if (*h == NULL && idx > 0)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	temp = *h;
	i = 0;
	while (i < idx && temp != NULL)
	{
		if (i == idx - 1)
		{
			if (temp->next == NULL)
			{
				return (add_dnodeint_end(h, n));
			}
			/*
			 * New's next now points to where temp's
			 * next is also pointing. Then,
			 * new's prev stores what temp stores,
			 * which is the address of the old node
			 * (that is, prev points to beginning of
			 * old node)
			 */
			new_node->next = temp->next;
			new_node->prev = temp;
			/*
			 * Temp's next now holds address
			 * of new node (that is, temp disconnected
			 * and reconnected to new_node)
			 */
			temp->next = new_node;
			return (new_node);
		}
		temp = temp->next;
		i = i + 1;
	}
	return (NULL);
}
