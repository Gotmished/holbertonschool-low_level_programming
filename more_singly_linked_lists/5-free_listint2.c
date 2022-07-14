#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: a pointer to a pointer to the head of the listint_t list
 */

void free_listint2(listint_t **head)
{
	listint_t *temporary;

	while (*head != NULL)
	{
		temporary = (*head)->next;
		free(*head);
		*head = temporary;
	}
}
