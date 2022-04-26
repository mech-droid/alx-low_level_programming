#include<stdlib.h>
#include "dog.h"

/**
 * init_dog - a function that initialises a variable type struct dog
 * @d: pointer to struct dog
 * @name: name to initialize
 * @age: age to initialise
 * @owner: owner to initialise
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)

	d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
