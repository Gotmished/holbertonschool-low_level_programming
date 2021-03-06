#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: a pointer to a pointer to the head of the listint_t list
 */

void free_listint2(listint_t **head)
{
	listint_t *temporary;

	if (head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		temporary = *head;
		*head = (*head)->next;
		free(temporary);
	}
}
