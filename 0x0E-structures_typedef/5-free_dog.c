#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

/**
 *free_dog - frees allocated memory
 *@d: struct to be freed
 *Return: void
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
