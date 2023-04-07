#include "hash_tables.h"
#include <stdlib.h>
/**
 * free_hash_node - free the linked list used in collision resolution
 * @node: points to head of linked list
 */

void free_hash_node(hash_node_t *node)
{
	hash_node_t *tmp;
	hash_node_t *head;

	tmp = node;
	while (tmp != NULL)
	{
		head = tmp;
		tmp = tmp->next;

		free(head->key);
		free(head->value);
		free(head);

	}
}
/**
 * hash_table_delete - frees malloc'd mem used
 * @ht: points to hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		free_hash_node(ht->array[i]);
		free(ht->array[i]);
	}

	free(ht);
}
