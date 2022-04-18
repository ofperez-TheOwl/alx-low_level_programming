#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - length of a string
 * @s: string
 *
 * Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

/**
 * _strcpy - copies the string pointed to by src, including the terminating null byte (\0)
 * @dest: pointer a destination string
 * @src: pointer to origin source
 *
 * Return: pointer to destination string
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
		dest[i] = src[i];

	return (dest);
}

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
	dog_t *newdog;
	char *dogname;
	char *dogowner;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
	{
		free(newdog);
		return (NULL);
	}
	/* copy of dog's name */
	if (name == NULL)
		(*newdog).name = NULL;
	else
	{
		dogname = malloc(sizeof(char) * (_strlen(name) + 1));
		if (dogname == NULL)
		{
			free(newdog);
			return (NULL);
		}
		(*newdog).name = _strcpy(dogname, name);
	}
	/* copy of dog's owner name */
	if (owner == NULL)
		(*newdog).owner = NULL;
	else
	{
		dogowner = malloc(sizeof(char) * (_strlen(owner) + 1));
		if (dogowner == NULL)
		{
			free(newdog);
			return (NULL);
		}
		(*newdog).owner = _strcpy(dogowner, owner);
	}
	newdog->age = age;

	return(newdog);
}
