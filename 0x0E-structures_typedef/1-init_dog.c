#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - main function
 * @d: struct argument
 * @name: dog's name
 * @age: dog'd age
 * @owner: dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
		d->name = name;
		d->age = age;
		d->owner = owner;
}
