#include "hash_tables.h"
#include <stdio.h>

/**
 *hash_table_create - creates a hash table
 *@size: size of the hash table array
 *Return: Always 0.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = NULL;

	if (size == 0)
		return (NULL);
	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
	{
		return (NULL);
	}
	else
	{
		new_table->array = calloc(size, sizeof(char *));
			if (new_table->array == NULL)
			{
				free(new_table);
				return (NULL);
			}
		new_table->size = size;
	}
	return (new_table);
}
