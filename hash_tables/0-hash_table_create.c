#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the array/table
 * Return: a pointer to the hash table upon success,
 * NULL, otherwise
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
	{
		return (NULL);
	}

	table->size = size;
	table->array = malloc(sizeof(hash_node_t) * size);
	if (table->array == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < size)
	{
		/* creating a blank table of a certain size */
		table->array[i] = NULL;
		i = i + 1;
	}
	return (table);
}
