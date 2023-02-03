#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *new_dog - creates a new struct
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of dog
 *Return: struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	d->name = strdup(name);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->age = age;
	d->owner = strdup(owner);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	return (d);

}
/**
 *free_dog - frees all memory
 *@d: struct to be freed
 *Return: void
 */

void free_dog(struct dog *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
