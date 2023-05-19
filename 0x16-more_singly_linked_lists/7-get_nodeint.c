#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t list
 * @head: a pointer to the head of the list
 * @index: the index of a node, beginning at 0
 * Return: NULL, if the node does not exist, the node otherwise
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < index)
	{
		head = head->next;
		if (head == NULL)
		{
			return (NULL);
		}
		i = i + 1;
	}
	return (head);
}
