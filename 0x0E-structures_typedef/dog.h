#ifndef DOG_H
#define DOG_H

int _putchar(char c);


/**
 *struct dog - creates an array
 *@name: var
 *@age: var
 *@owner: var
 *Return: Always
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

int _strlen(char *s);
char *_strncpy(char *dest, char *src, int n);
#endif
