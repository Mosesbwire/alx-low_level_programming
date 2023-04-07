#include "hash_tables.h"
#include <ctype.h>
#include <string.h>
#include <stdlib.h>


/**
 * is_valid_key - checks that given key is a valid string
 * @key: the key
 * Return: 1 if key is valid otherwise 0
 */

int is_valid_key(const unsigned char *key)
{
	int i;
	const char *my_key = (const char *)key;

	if (strlen(my_key) == 0)
	{
		return (0);
	}

	for (i = 0; key[i] != '\0'; i++)
	{
		if (!isspace(key[i]))
		{
			return (1);
		}
	}

	return (0);
}
/**
 * key-index - takes @key through hashing to generate index
 * @key: the key
 * @size: size of the array
 * Return: index or KEY_INDEX_ERROR on error
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;
	unsigned long int hash_value;
	
	hash_value = hash_djb2(key);
	index = hash_value % size;

	return (index);
}

