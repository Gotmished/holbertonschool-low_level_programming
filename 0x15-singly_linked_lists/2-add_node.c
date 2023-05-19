#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginnint of a list_t list
 * @head: pointer to a pointer to head of linked list
 * @str: string to be assigned to the node
 * Return: the address of the new element, or NULL upon failure
 */

list_t *add_node(list_t **head, const char *str)
{
	/* head pointer already provided */
	list_t *new_node;

	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
	{
		return (NULL);
	}
	/* new node needs to be associated with given data */
	/* duplicate, as *str is const */
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	/* new node points to head node */
	new_node->next = *head;
	/* new node is now the head node */
	*head = new_node;
	return (new_node);
}
