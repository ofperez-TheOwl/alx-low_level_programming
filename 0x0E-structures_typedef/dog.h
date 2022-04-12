#ifndef DOG_H
#define DOG_H

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

/**
 * struct dog - dog structure
 * @name: pointer to string; name of dog
 * @age: float; age of dog
 * @owner: pointer to string; name of dog owner
 * TheOwl
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

dog_t *new_dog(char *name, float age, char *owner);

#endif
