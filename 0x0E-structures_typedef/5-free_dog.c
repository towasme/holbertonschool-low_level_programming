#include "dog.h"
#include <stdio.h>
/**
 *print_dog - creates an array
 *@d: pointer
 *Return: Always
 */
void free_dog(dog_t *d)
{
	if (d)
	{
	free(d->name);
	free(d->age);
	free(d->owner);
	}
}
