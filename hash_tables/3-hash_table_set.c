#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"


/**
 * create_node - creates a new hash table element
 * @key: the key relating to the node
 * @value: the value associate with the node
 *
 * Return: the new node, or NULL on failure
 */

hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(*node));
	if (node == NULL)
	{
		return (NULL);
	}
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (NULL);
	}
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (NULL);
	}
	node->next = NULL;
	return (node);
}

/**
 * hash_table_set - adds an element to a hash table
 * @ht: the hash table
 * @key: a non-empty string
 * @value: the value associated with the key
 * Return: 1 upon success, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node;
	hash_node_t **array;

	if (ht == NULL || key == NULL || strlen(key) == 0 || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	array = ht->array;
	while (array[index] != NULL)
	{
		if (strcmp(array[index]->key, key) == 0)
		{
			if (array[index]->value == NULL)
				return (0);
			free(array[index]->value);
			array[index]->value = strdup(value);
			return (1);
		}
		array[index] = array[index]->next;
	}
	node = create_node(key, value);
	if (array[index] == NULL)
	{
		array[index] = node;
	}
	else
	{
		node->next = array[index];
		array[index] = node;
	}
	return (1);
}
