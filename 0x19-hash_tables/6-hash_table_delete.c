#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: a pointer to a hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t **array;
	hash_node_t *next;

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
			next = array[i]->next;
			free(array[i]->key);
			free(array[i]->value);
			free(array[i]);
			array[i] = next;
		}
		i = i + 1;
	}
	free(ht->array);
	free(ht);
}
