#include <string.h>
#include <stdlib.h>
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
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to a pointer to head of linked list
 * @str: string to be assigned to the node
 * Return: the address of the new element, or NULL upon failure
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last_node;

	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL || str == NULL)
	{
		return (NULL);
	}
	/* new node needs to be associated with given data */
	/* duplicate, as *str is const */
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = _strlen(new_node->str);
	/* new node points to end of list */

	/* new node is now the head node if head points to NULL */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	/* Otherwise, find and set last node to new node */
	else
	{
		last_node = *head;
		/* keep setting last node's address to next until it is NULL */
		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
	}
	last_node->next = new_node;
	return (new_node);
}
