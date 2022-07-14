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
		temporary = head;
		head = head->next;
		free(temporary->str);
		free(temporary);
	}
}
