#include "dog.h"
#include <stdio.h>
/**
 *free_dog - creates an array
 *@d: pointer
 *Return: Always
 */
void free_dog(dog_t *d)
{
	if (d)
	{
	free(d->name);
	free(d->owner);
	free(d);
	}
}
