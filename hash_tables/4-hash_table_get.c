#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table
 * @key: a non-empty string
 * Return: the value associated with the element,
 * or NULL if the key could not be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t **array;

	if (ht == NULL || key == NULL || strlen(key) == 0)
	{
		return (NULL);
	}

	index = key_index((const unsigned char *)key, ht->size);
	array = ht->array;
	while (array[index] != NULL)
	{
		if (strcmp(array[index]->key, key) == 0)
		{
			return (array[index]->value);
		}
		array[index] = array[index]->next;
	}
	return (NULL);
}
