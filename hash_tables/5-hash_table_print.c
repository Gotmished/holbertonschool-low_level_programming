#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t **array;
	char flag;

	if (ht == NULL || ht->array == NULL)
	{
		return;
	}

	printf("{");

	flag = 0;
	i = 0;
	while (i < ht->size)
	{
		array = ht->array;
		while (array[i] != NULL)
		{
			if (flag == 1)
			{
				printf(", ");
			}
			printf("'%s': '%s'", array[i]->key, array[i]->value);
			flag = 1;
			array[i] = array[i]->next;
		}
		i = i + 1;
	}
	printf("}\n");
}
