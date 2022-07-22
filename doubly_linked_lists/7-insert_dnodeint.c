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

	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL || *h == NULL)
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
			new_node->next = temp->next;
			new_node->prev = temp;
			temp->next = new_node;
			return (new_node);
		}
		temp = temp->next;
		i = i + 1;
	}
	return (NULL);
}
