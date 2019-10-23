#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
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

	while (name[i])
	{
		i++;
	}

	while (owner[j])
	{
		j++;
	}

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * i + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * j + 1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->age = age;
	dog->name = _strncpy(dog->name, name, i + 1);
	dog->owner = _strncpy(dog->owner, owner, j + 1);
	return (dog);
}

#include "dog.h"
/**
 * _strlen - function returns the length of a string
 * @s: sting
 * Return: lenght of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != 0)
	{
	s++;
	i++;
	}
	return (i);
}

#include "dog.h"

/**
 * _strncpy - concatenates two strings
 * @dest: array
 * @src: array
 * @n: in
 * Return: Always
 **/

char *_strncpy(char *dest, char *src, int n)
{
	int b;

	for (b = 0; b < n && src[b] != '\0'; b++)
	{
	dest[b] = src[b];
	}
	for (; b < n; b++)
	{
	dest[b] = '\0';
	}
	return (dest);
}
