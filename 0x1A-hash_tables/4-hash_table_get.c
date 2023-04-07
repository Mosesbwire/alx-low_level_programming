#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * hash_table_get - takes in a key and returns corresponding value
 * @ht: hash table
 * @key: key
 * Return: value or NULL if not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	const unsigned char *key_t = (const unsigned char *)key;
	char *value = NULL;
	hash_node_t *node;

	index = key_index(key_t, ht->size);

	if (ht->array[index] == NULL)
	{
		return (NULL);
	}

	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			value = node->value;
			break;
		}

		node = node->next;
	}
	return (value);
}
