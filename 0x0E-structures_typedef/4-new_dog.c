#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * *new_dog - creates a new object of type dog_t
 * @name: pointer to char; name of dog
 * @age: float; age of dog
 * @owner: pointer to char; name of dog's owner
 *
 * Return: pointer to a dog_t type object, NULL if failure
 * TheOwl
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return(NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;

	return(d);
}
	
