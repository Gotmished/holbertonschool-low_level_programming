#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * of a dlistint_t list
 * @head: a pointer to a pointer to the first element
 * @n: data to be stored in new node
 * Return: the address of the new element,
 * or NULL upon failure
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = NULL;
	if (*head != NULL)
	{
		(*head)->prev = new_node;
		/*
		 * If head is not NULL (that is, if it points to a node)
		 * it is still pointing to old first node, and its prev
		 * was pointing to NULL but is now made to point to new_node
		 */
	}
	new_node->next = *head;
	/*
	 * Head currently stores address of old first node.
	 * This associates next pointer with new_node, and its value
	 * is the address of the old first node, which is stored by *head
	 */
	*head = new_node;
	/* Changes value stored by *head to address of new_node */
	return (new_node);
}
