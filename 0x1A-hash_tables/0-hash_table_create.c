#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - creates a hash table
 * @size: size of the hash table
 * Return: pointer to hash table or NULL if error occurs
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = malloc(sizeof(hash_table_t *));

	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = calloc(sizeof(hash_node_t *), size);

	if (ht->array == NULL)
	{
		return (NULL);
	}

	return (ht);
}
