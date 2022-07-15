#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: a pointer to a pointer to the head of the list
 * @idx: the index at which the new node should be added. Begins at 0
 * @n: data held within node
 * Return: the address of the new node, or NULL upon failure
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp;
	unsigned int i;

	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL || *head == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	i = 0;
	while (i < idx)
	{
		if (temp->next == NULL)
		{
			return (NULL);
		}
		if (i == idx - 1)
		{
			new_node->next = temp->next;
			temp->next = new_node;
			return (new_node);
		}
		else
		{
			temp = temp->next;
		}
		i = i + 1;
	}
	return (NULL);
}
