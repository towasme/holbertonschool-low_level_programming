#include "hash_tables.h"
#include <stdio.h>

/**
 *key_index - returns the index of a key
 *@key: the number key that djb2 returns
 *@size: size of the hash table
 *Return: Always 0.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	index = hash_djb2(key);
	return (index = (index % size));
}
