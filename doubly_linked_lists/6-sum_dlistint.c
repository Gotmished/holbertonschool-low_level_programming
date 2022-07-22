#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - returns the sume of all data
 * of a dlistint_t linked list
 * @head: a pointer to the first element
 * Return: the sum of all data, or 0
 * if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	unsigned int n, sum;

	if (head == NULL)
	{
		return (0);
	}

	sum = 0;
	while (head != NULL)
	{
		/* n given the value of n that head points to */
		n = head->n;
		sum = sum + n;
		/* head made to point to next node */
		head = head->next;
	}
	return (sum);
}
