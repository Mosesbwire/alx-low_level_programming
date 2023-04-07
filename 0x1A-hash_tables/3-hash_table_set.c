#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * hash_table_set - inserts data to hash table
 * @ht: points to hash table to insert data into
 * @key: key
 * @value: data associated to @key
 * Return: 1 on succesfull insertion of data otherwise 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int index;
	const unsigned char *key_t = (const unsigned char *)key;

	node = malloc(sizeof(*node));

	if (node == NULL)
		return (0);

	if (ht == NULL)
		return (0);

	if (!is_valid_key(key_t))
		return (0);

	node->key = malloc(sizeof(strlen(key) + 1));

	node->value = malloc(sizeof(strlen(value) + 1));

	if (node->key == NULL || node->value == NULL)
		return (0);

	strcpy(node->key, key);

	strcpy(node->value, value);

	index = key_index(key_t, ht->size);

	node->next = ht->array[index];

	ht->array[index] = node;

	return (1);
}
