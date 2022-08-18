#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - adds an element to a hash table
 * @ht: the hash table
 * @key: a non-empty string
 * @value: the value associated with the key
 * Return: 1 upon success, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *head;
	hash_node_t **array;
	unsigned long int index, size;

	node = malloc(sizeof(*node));
	if (node == NULL)
	{
		return (0);
	}

	array = ht->array;
	size = ht->size;
	index = key_index((const unsigned char *)key, size);

	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;
	if (array[index] == NULL)
	{
		array[index] = node;
	}
	else
	{
		head = array[index];
		while (head->next != NULL)
		{
			head = head->next;
		}
		head->next = node;
	}
	return (1);
}
