#include "hash_tables.h"
#include <stdio.h>

/**
 *hash_table_print - functions that prints a hash table
 *@ht: is the hash table you want to print values and key from
 *Return: No return
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx = 0;
	int flag = 0;

	if (ht->array == NULL || ht == NULL)
		return;

	printf("{");
	if (ht != NULL)
	{
		for (; idx < ht->size; idx++)
		{
			while (ht->array[idx])
			{
				if (ht->array[idx] != NULL)
				{
					if (flag == 1)
						printf(", ");
					printf("'%s': '%s'", ht->array[idx]->key, ht->array[idx]->value);
					flag = 1;
				}
				ht->array[idx] = ht->array[idx]->next;
			}
		}
	}
	printf("}\n");
}
