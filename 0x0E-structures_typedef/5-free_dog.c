#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees instances of struct dog
 * @d: instance os dog to be freed
 *
 * Return: nothing
 * TheOwl
 */

void free_dog(dog_t *d)
{
	/* exclusion */
	if (d == NULL)
		return;

	if (d->name)
		free(d->name);
	if (d->owner)
		free(d->owner);
	free(d);
}
