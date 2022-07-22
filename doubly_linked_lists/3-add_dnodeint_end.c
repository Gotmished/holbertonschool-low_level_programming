#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * _strlen - finds the length of a string
 * @str: string to find the length of
 *
 * Return: length of string
 */
unsigned int _strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i = i + 1;
	}
	return (i);
}

/**
 * add_dnodeint_end - adds a new node at the end
 * of a dlistint_t list
 * @head: a pointer to a pointer to the first element
 * @n: data to be stored in new node
 * Return: the address of the new element,
 * or NULL upon failure
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *last_node;

	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);

	}
	else
	{
		last_node = *head;
		while (last_node->next != NULL)
		{
			/*
			 * If last_node's next points to another node
			 * let last_node hold what next holds, which
			 * is the address of the next node. Last node
			 * effectively becomes the next node along.
			 */
			last_node = last_node->next;
		}
	}
	last_node->next = new_node;
	new_node->prev = last_node;
	return (new_node);
}
