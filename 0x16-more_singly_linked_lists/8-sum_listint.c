#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - returns the sum of all data (n) of a listint_t list
 * @head: a pointer to the head of the list
 * Return: the sum, or 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum, n;

	if (head == NULL)
	{
		return (0);
	}

	sum = 0;
	while (head != NULL)
	{
		n = head->n;
		sum = sum + n;
		head = head->next;
	}
	return (sum);
}
