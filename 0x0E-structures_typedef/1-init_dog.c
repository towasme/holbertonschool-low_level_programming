#include "dog.h"
#include <stdio.h>
/**
 *init_dog - creates an array
 *@name: var typ char
 *@age: var
 *@owner: var
 *@d: var
 *Return: Always
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
