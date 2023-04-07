#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - creates a hash table
 * @size: size of the hash table
 * Return: pointer to hash table or NULL if error occurs
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	hash_node_t **arr;

	if (size == 0)
	{
		return (NULL);
	}
	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
	{
		free(ht);
		return (NULL);
	}

	ht->size = size;
	
	arr = calloc(sizeof(*arr), size);

	if (arr == NULL)
	{
		free(ht);
		return (NULL);
	}

	ht->array = arr;
	return (ht);
}
