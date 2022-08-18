#include <stdlib.h>
#include "hash_tables.h"

/**
 * key_index - finds the index of a key
 * @key: the key
 * @size: the size of the hash table (array)
 * Return: the index at which the key/value pair
 * is stored in the the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash, index;

	/* returns the value associated with the key */
	hash = hash_djb2(key);
	/* returns the point at which the value is stored */
	index = hash % size;
	return (index);
}
