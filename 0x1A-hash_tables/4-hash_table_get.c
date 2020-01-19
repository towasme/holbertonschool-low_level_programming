#include "hash_tables.h"
#include <stdio.h>

/**
 *hash_table_get - retrieves the value of a certain node
 *@ht: is the hash table you want to add or update the key/value to
 *@key: the key given by the function djb2
 *Return: Always 0.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx = 0;

	if (key == NULL || ht == NULL)
		return (NULL);
	idx = key_index((unsigned char *)key, ht->size);
	if (ht->array[idx] != NULL)
	{
		return (ht->array[idx]->value);
	}
	else
	{
		return (NULL);
	}
}
