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

	if (*head == NULL && idx > 0)
	{
		return (NULL);
	}

	/* if head is **, must create a temporary association to manipulate */
	temp = *head;
	i = 0;
	while (i < idx)
	{
		temp = temp->next;
		i = i + 1;
	}

	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = temp;
	new_node = temp;
	return (new_node);
}
