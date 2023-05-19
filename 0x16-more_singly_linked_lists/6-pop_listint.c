#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t list
 * @head: a pointer to a pointer to the head of the list
 * Return: n, the head node's data, or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temporary;
	int n;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	if (*head != NULL)
	{
		temporary = *head;
		*head = (*head)->next;
		n = temporary->n;
		free(temporary);
	}
	return (n);
}
