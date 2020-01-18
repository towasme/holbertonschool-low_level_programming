#include "hash_tables.h"
#include <stdio.h>

/**
 *hash_djb2 - function used to create the hashing number
 *@str: the string it needs to create the hashing
 *Return: Always 0.
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
