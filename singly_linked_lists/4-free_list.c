#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: a pointer to the head of the list
 */

void free_list(list_t *head)
{
	list_t *temporary;

	while (head != NULL)
	{
		temporary = head->next;
		free(head->str);
		free(head);
		head = temporary;
		/*
		 * Head currently points to the first node, so
		 * let temp point to the next node, then free head's prior
		 * association with str (because memory was allocated for
		 * the string (it was duplicated into allocated memory)
		 * and *str is a pointer to it. Not the case
		 * for the int len), and then head itself, before
		 * allowing head to take over from temp, and
		 * point to the next node.
		 */
	}
}
