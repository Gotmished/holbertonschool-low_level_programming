#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: a pointer to a hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	hash_node_t **array;

	if (ht == NULL)
	{
		return;
	}

	i = 0;
	while (i < ht->size)
	{
		array = ht->array;
		while (array[i] != NULL)
		{
			node = array[i];
			free(node->key);
			free(node->value);
			array[i] = array[i]->next;
			free(node);
		}
		i = i + 1;
	}
	free(ht->array);
	free(ht);
}
