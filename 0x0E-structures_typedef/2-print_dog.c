#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog type information
 * @d: pointer to struct dog; object to print
 *
 * Return: nothing
 * TheOwl
 */

void print_dog(struct dog *d)
{
	/* exclusions */
	if (d == NULL)
		return;
	/* print dog's name */
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	/* prijnt dog's age */
	if (d->age == 0)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);
	/* print dog's owner */
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
