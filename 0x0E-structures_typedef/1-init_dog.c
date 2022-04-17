#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer do struct dog; pointer of variable
 * @name: pointer to string; first parameter of struct dog
 * @age: float; second parameter of struct dog
 * @owner: poiter to string; third parameter of struct dog
 *
 * Return: Nothing
 * TheOwl
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
	return;
}
