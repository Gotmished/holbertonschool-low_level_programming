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

	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	/* if inserted as first node */
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
/* if head is **, must create a temporary association to manipulate */
		temp = *head;
		i = 0;
		while (i < idx - 1)
		{
/* idx-1 because next will be pointing to the idx node at this point */
			temp = temp->next;
			i = i + 1;
		}
	}
	/* Assign new's next to temp's next */
	new_node->next = temp->next;
	/* Assign temp's next to point to new_node's address */
	temp->next = new_node;
	return (new_node);
}
