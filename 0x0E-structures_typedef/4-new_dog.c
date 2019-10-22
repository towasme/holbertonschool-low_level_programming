#include "dog.h"
#include <stdio.h>
/**
 *new_dog - new struct made
 *@name: pointer
 *@age: float var
 *@owner: char type var
 *Return: Always
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int i = 0, j = 0;
	
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * strlen(name) + 1);
	if (dog->name == NULL)
		return (NULL);
	while (name)
		dog->name[i] = name[i];

