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
	while (ht->array[idx] != NULL)
	{
		if (strcmp(key, ht->array[idx]->key) == 0)
			return (ht->array[idx]->value);
		ht->array[idx] = ht->array[idx]->next;
	}
	return (NULL);
}
