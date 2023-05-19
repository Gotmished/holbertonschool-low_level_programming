#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns the indexth node
 * of a dlistint_t list
 * @head: a pointer to the first element
 * @index: the location of the node
 * Return: the data in the element identified,
 * or NULL if the node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;

	if (head == NULL)
	{
		return (NULL);
	}

	count = 0;
	while (count < index)
	{
		head = head->next;
		if (head == NULL)
		{
			return (NULL);
		}
		count = count + 1;
	}
	return (head);
}
