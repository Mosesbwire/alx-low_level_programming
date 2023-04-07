#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * hash_table_print - prints key value pairs of a hash table
 * @ht: hash table to print
 */

void hash_table_print(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;
	int flag, first_print = 0;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			tmp = ht->array[i];
			while (tmp != NULL)
			{
				printf("\'%s\': \'%s\'". tmp->key, tmp->value);
				tmp = tmp->next;
				if (tmp != NULL)
				{
					printf(", ");
				}
			}
		}
		flag = 1 + i;
		if (ht->array[flag] != NULL)
		{
			if (first_print != 0)
			{
				printf(", ");
			}
			first_print += 1;
		}
	}

	printf("}\n");
}
